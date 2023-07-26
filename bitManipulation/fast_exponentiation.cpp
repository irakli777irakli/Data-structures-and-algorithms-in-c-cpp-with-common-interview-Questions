#include<iostream>
using namespace std;

// find power of number in logn time
/*
instead of looping n number of times
loop binary representation of number's digit times
*/ 


int fast_expo(int a, int n){
    // a number
    // n power
    int ans = 1;

    while(n>0){
        int last_bit = (n&1);
        if(last_bit){
            ans = ans * a;
        }
        a = a*a;
        n = n>>1;
    }

}


int main(){

    int a, n;
    cin>>a>>n;

    cout<<fast_expo(a,n) << endl;

    return 0;
}