#include<iostream>
#include<vector>
using namespace std;

/*
Given array of integers in which each
element represents height of box
determine how much water can be trapped


*/
int maxWaterTrapped(vector<int> heights) {
    int n = heights.size();
    if(n<=2)
        return 0;
    
    vector<int> left(n,0), right(n,0);
    left[0] = heights[0];
    right[n-1] = heights[n-1];

    for(int i=1; i<n;i++) {
        left[i] = max(left[i-1],heights[i]);
        right[n-i-1] = max(right[n-i],heights[n-i-1]);
    }

    int trappedWater;
    for(int i=0;i<n;i++) {
        trappedWater += min(left[i],right[i]) - heights[i];
    }

    return trappedWater;



}

int main() {
    vector<int> water {0,1,0,2,1};
    cout << maxWaterTrapped(water);

    return 0;
}