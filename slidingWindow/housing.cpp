#include<iostream>
using namespace std;

/*
find start & end indexes of consequative elemtns
that adds up to k
Input [1,5,3,6,2,1]
k = 8
Output 1,2 and 3,4
*/

void housing(int arr[],int n, int k) {
    // window start point
    int i = 0;
    // window end point
    int j = 0;
    // total sum within window
    int currentSum = 0;
    while(j <n) {
        currentSum += arr[j];
        // expand windows
        j++;

        // shring window started window start point
        while(currentSum > k && i < j) {
            currentSum -= arr[i];
            i++;
        }

        if(currentSum == k) {
            cout <<i<< ", "<<j<< endl;
        }
    }
}


int main() {

    return 0;
}
