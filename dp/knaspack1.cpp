#include<iostream>
#include<vector>
using namespace std;


// 2^n time 
int knapsack(int weights[],int prices[],int itemsCount,int bagWeight) {
    if(itemsCount == 0 || bagWeight == 0) {
        return 0;
    }

    int include = 0, exclude = 0;
    if(weights[itemsCount-1] <=bagWeight) {
        include = prices[itemsCount-1] + knapsack(weights,prices,itemsCount-1,bagWeight-weights[itemsCount-1]);
    }
    exclude = 0 + knapsack(weights,prices,itemsCount-1,bagWeight);
    return max(include,exclude);
}

/*
given weights and price of n items put a bubset 
of items in a bag of capacity W.
*/

int knapsackdp(int weights[],int price[],int noOfItems,int bagWeight) {
    vector<vector<int> > dp(noOfItems+1,vector<int>(bagWeight+1,0));

    for(int n=1;n<=noOfItems;n++) {
        for(int w=1;w<=bagWeight;w++) {
            int include = 0, exlucde = 0;
            if(weights[n-1] <= w) {
                include = price[n-1] + dp[n-1][w - weights[n-1]];
            } 
            exlucde = dp[n-1][w];

            dp[n][w] = max(include,exlucde);
        }
    }

    return dp[noOfItems][bagWeight];
}

int main() {
    int weights[] = {2,7,3,4};
    int prices[] = {5,20,20,10};
    int itemsCount = 4;
    int bagWeight = 11;

    int result = knapsack(weights,prices,itemsCount,bagWeight);
    cout << result;

    return 0;
}
