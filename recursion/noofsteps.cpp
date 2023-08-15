#include<iostream>
using namespace std;

/*
Input: num = 14
Output: 6
Explanation: 
Step 1) 14 is even; divide by 2 and obtain 7. 
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3. 
Step 4) 3 is odd; subtract 1 and obtain 2. 
Step 5) 2 is even; divide by 2 and obtain 1. 
Step 6) 1 is odd; subtract 1 and obtain 0.
*/

int noofSteps(int n, int step) {
    if(n == 0) return step;

    if(n&1 == 0) return noofSteps(n/2,step+1);

    return noofSteps(n-1,step+1);
}


int main() {
    int result = noofSteps(14,0);
    cout << result << endl;


    return 0;
}

