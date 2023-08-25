#include<iostream>
#include<math.h>
using namespace std;

/*
Given integer n return number of zeros inside it
Input 30204
Output 2
*/

int count_zeros(int n,int count) {
    if(n==0) return count;

    if(n % 10 == 0)
        return count_zeros(n/10,count+1);
    
    return count_zeros(n/10,count);
}



int main() {
    int result = count_zeros(30204,0);
    cout << result << endl;

    return 0;
}