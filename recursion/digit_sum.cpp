#include<iostream>
using namespace std;

/*
given number n find the sum of all digits
input 5555
output 20
*/

int digitSum(int n){
    if(n == 0)
        return n;
    // take last digit reduce number by facor of 10
    return (n % 10) + digitSum(n/10);
}

int main(){
    int result = digitSum(5555);
    cout << result << endl;
    return 0;
}
