#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if((n & (n-1)) == 0)
        cout<<"Pwr of 2";
    else    
        cout<< "Not Pwr of 2";

    return 0;
}