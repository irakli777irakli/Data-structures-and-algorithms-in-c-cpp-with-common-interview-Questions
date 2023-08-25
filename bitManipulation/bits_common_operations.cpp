#include<iostream>
using namespace std;

// 101
// &
// 100
// 1
int getIthBit(int n, int i){
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0;
    
}

void setIthBit(int &n, int i){
    int mask = (1<<i);
    n = (n | mask);
}
// 101
// &
// 010
// 111
void clearIthBit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}

void updateIthBit(int &n, int i, int v){
    clearIthBit(n,i);
    int mask = (v<<i);
    n = n|mask;

}

void clearLastIthBits(int &n, int i){
    int mask = (~0 << i);
    n  = n & mask;
}
//11101 000000 0 Sample output

//11101 010111 0 Sample Input
//&
//11111 000000 1 Mask

// how to get mask
//11111 000000 0
// | 
//00000 000000 1

void clearBitsInRange(int &n, int i, int j){
    //11111 000000 0
    int a = (~0)<<(j+1);
    //00000 000000 1
    int b = (1<<i) -1;
    int mask = a | b;
    n = n & mask;
}



int main(){
    int n = 15;
    int i = 2;
 

       
    cout<< n <<endl;

    return 0;
}