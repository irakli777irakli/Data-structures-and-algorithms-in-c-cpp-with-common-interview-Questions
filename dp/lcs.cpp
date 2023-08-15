#include<iostream>
#include<vector>
using namespace std;


/*
given a array of int return length
of longest common subsequence
Input [50,4,10,8,30,100]
Output 4
explenation [4,8,30,100] || [4,10,30,100]
if current val > previous elements starting from index 0
atach current one and to every one of them and store max
in dp tble
*/
int lcs(vector<int> arr) {
    int n = arr.size();
    vector<int> dp(n,1);

    int largest = 1;

    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) {
            
            if(arr[i] > arr[j]) {
                dp[i] = max(dp[i],1+dp[j]);
                largest = max(largest,dp[i]);
            }
        }
    }


    return largest;

}


int main() {
    vector<int> arr {50,4,10,8,30,100};

    cout << lcs(arr);

    return 0;
}
