#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/*
given an array of distinc elements. find
the minimum number of swaps required to sort
the arry in stricly increasing order.

-approach
1.group elements with their corresponding index and sort them by value
2.if their current position != index 
swap them by their index value and 
increase swaps count

*/

int minSwaps(vector<int> &nums) {
    vector<pair<int,int> > v;

    // pairing value and indxe
    for(int i=0;i<nums.size();i++) {
        v.push_back({nums[i],i});
    }

    // sorting by value
    sort(v.begin(),v.end());
    int swaps = 0;

    
    for(int i=0;i<nums.size();i++) {
        pair<int,int> p =  v[i];

        int value = p.first;
        int index = p.second;

        // if already correctly placed move on otherwise swap
        if(i != index) {
            swap(v[i],v[index]);
            swaps++;
            i--;
        }
    }

    return swaps;
}


int main() {
    vector<int> arr {6,3,1,2,4,5};
    int result = minSwaps(arr);
    cout << result << endl;
    return 0;
}