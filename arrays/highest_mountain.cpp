#include<iostream>
#include<vector>
using namespace std;

/*
given array of int 
return count of elements that 
builds up highest mountain
Input [5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4]
Output = 9
eg. [1,2,3,4,5,4,3,2,0]
*/
int highest_mountain(vector<int> arr) {
    int n = arr.size();
    int largest = 0;

    for(int i=1;i<=n-2;) {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
            int count = 1;
            int j = i;
            
            // backwards of mountain
            while(j>= 1 && arr[j] >arr[j-1]) {
                j--;
                count++;
            }

            // forward of mountain using `i`
            while (i<=n-2 && arr[i]>arr[i+1])
            {
                i++;
                count++;
            }

            largest = max(largest,count);
            
        }
        else {
            i++;
        }
    }

    return largest;
}


int main() {
    vector<int> arr {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    return 0;
}