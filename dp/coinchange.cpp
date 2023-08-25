#include<iostream>
#include<vector>
#include<climits>
using namespace std;

/*
given denomination = {1,5,7,10}
determine in how many ways you can make coin change
if impossible return -1
hint: remeber how many ways you can make previous coin change
*/

int coinchange(int m, vector<int> denomination) {
    vector<int> dp(m+1,0);
    dp[0] = 0;

    for(int i=1;i<=m;i++) {
        dp[i] = INT_MAX;

        for(int c : denomination ) {
            if(i-c >=0 && dp[i-c]!=INT_MAX) {
                dp[i] = min(dp[i],dp[i-c] + 1);
            }
        }
    }

    return dp[m] == INT_MAX ? -1 : dp[m];
}

int main() {
    vector<int> denomination = {1,5,7,10};
    int money = 8;
    int result = coinchange(money,denomination);
    cout << result ;


    return 0;
}