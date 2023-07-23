#include<iostream>
using namespace std;

string spell[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printSpell(int n){
    if(n == 0) return;

    int last_digit = n % 10;
    printSpell(n/10);
    cout<<spell[last_digit] << endl;
}


int main(){
    
    printSpell(101);

    return 0;
}