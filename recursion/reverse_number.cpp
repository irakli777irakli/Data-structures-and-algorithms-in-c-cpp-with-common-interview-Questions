#include<iostream>
#include<math.h>
using namespace std;

/*
given number n reverse it
Input 1342
Output = 2431
*/


int sum = 0;

void reverseNumber(int n){
    if(n == 0){
        return;
    }

    sum = (sum * 10) + (n % 10);
    reverseNumber(n/10);
    
}

int reverse(int n, int digits){
    if(n%10 == n)
        return n;
    
    return (n%10)* (int)pow(10,digits-1) + reverse(n/10,digits-1);
}

int reverseNumber2(int n){
    int digits = (int)(log10(n)+1);
    return reverse(n,digits);

}

bool palindrome(int n) {
    if(n == reverseNumber2(n)) return true;
    return false;
}


int main(){
    int result = reverseNumber2(1342);
    cout << result << endl;
    return 0;
}


