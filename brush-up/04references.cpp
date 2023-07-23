#include<iostream>

using namespace std;


int main(){

    int a=10;
    int &r=a;

    int b=30;
    r=30;
    cout<<a<<r<<endl;

    


    return 0;
}