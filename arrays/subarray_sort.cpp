#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Given an array of integers, find subarray which must be sorted
and return indexes of them
Input [1,2,3,4,5,6,7,10,8,9,11,12]
Output [7,9]
possible appraoches
1.sort and compare nlogn
2.
*/
vector<int> subarry_sort(vector<int> arr) {
    vector<int> arrcopy(arr);
    sort(arr.begin(),arr.end());

    int i=0;
    int n= arr.size();

    while(i<n && arr[i]==arrcopy[i]) 
        i++;
    
    int j= arr.size() -1;
    while(j>=0 && arrcopy[j]==arr[j]) 
        j--;
    
    if(i==n) 
        return {-1,-1};
    
    return {i,j};
}
bool isOutOfOrder(vector<int> arr, int i) {
    int x = arr[i];
    if(i==0) {
        return x > arr[1];
    }

    if(i==arr.size()-1) {
        return x < arr[i-1];
    }

    return x > arr[i+1] || x < arr[i-1];
}

pair<int,int> subarry_sort2(vector<int> arr) {
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0;i<arr.size();i++) {
        int x = arr[i];
        if(isOutOfOrder(arr,i)) {
            smallest = min(smallest,x);
            largest = max(largest,x);
        }
    }

    if(smallest == INT_MAX) 
        return {-1,-1};
    
    int left = 0;
    while(smallest >= arr[left]) {
        left++;
    }
    int right = arr.size()-1;

    while(largest <= arr[right]) {
        right--;
    }

    return {left,right};

    
}




int main() {
    vector<int> arr {1,2,3,4,5,8,7,6,9,10,11};
    pair<int,int> result = subarry_sort2(arr);
    cout << result.first << "," << result.second;

    return 0;
}


