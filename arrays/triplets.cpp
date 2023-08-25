#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

/*
given array of integers find unique triplets that adds
up to given sum

take current elemt and find 
two pair of elements in remaining array which adds up to sum
use 2 pointers
if 2 pair elements sum > total_sum shift `end pointer` 
else start pointer
*/
vector<vector<int> > triplets(vector<int> arr, int target_sum) {
    sort(arr.begin(),arr.end());
    int n = arr.size();

    vector<vector<int> > result;

    for(int i=0;i<=n-3;i++){
        int j =  i+1;
        int k = n-1;

        // used two pair problem with left, right pointer
        while(j < k) {
            // every iter reinitializes 
            int current_sum = arr[i];
            current_sum += arr[j];
            current_sum += arr[k];
            if(current_sum == target_sum) {
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k++;
            }
            else if(current_sum > target_sum) {
                k--;
            }
            else {
                j++;
            }

        }
    }

    return result;
}


int main() {
    vector<int> arr{1, 2, 3, 4, 5, 8, 15, 22};
    int sum = 13;

    vector<vector<int> > result =  triplets(arr,sum);
    for(vector<int> v: result) {
        for(int item : v) {
            cout << item << ",";
        }
        cout << endl;
    }

    return 0;
}