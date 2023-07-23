#include<iostream>
using namespace std;


int fast_expo(int a, int n){
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