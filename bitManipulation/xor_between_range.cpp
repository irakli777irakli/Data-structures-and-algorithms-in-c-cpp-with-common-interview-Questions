#include<iostream>
using namespace std;

/*
0 => 0
1 => 0 ^ 1 = 1
2 => 1 ^ 2 = 3
3 => 3 ^ 3 = 0
4 => 4 ^ 0 = 4
5 => 5 ^ 4 = 1
6 => 6 ^ 1 = 7
7 => 7 ^ 6 = 0
8 => 8 ^ 0 = 8

above 4 repetitive conditions are detected so
we can write them as follows
*/

int range_xor(int a){
    if(a % 4 == 0) return a;
    if(a % 4 == 1) return 1;
    if(a % 4 == 2) return a+1;
    
    return 0;
}


int main(){
    int a = 3;
    int b = 9;

    int answer = range_xor(b) ^ range_xor(a-1);
    cout<< answer << endl;


    return 0;
}

