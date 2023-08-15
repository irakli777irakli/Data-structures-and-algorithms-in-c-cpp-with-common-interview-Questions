#include<iostream>
#include<cmath>
using namespace std;
void CalculateTime(int n, int base);

// find the n th magic number
/*
1 => 5
2 => 25
3 => 30

1 in binary is 01. 1 * 5^1 = 5
2 in binary is 10. 0*5^1 + 1*5^2 = 25
*/

int magicNumber(int n){
    // time is logn
    CalculateTime(n,2);

    int answer = 0;
    int base = 5;
    while(n > 0){
        // check last bit. is it on or off
        int last_bit = n & 1;
        answer += last_bit * base;
        // igonre last bit
        n = n>>1;
        // power base
        base *= 5;
    }
    
    return answer;
}

void CalculateTime(int n, int base){

    int ans = (int)(log(n) / log(base)) + 1;
    cout<< ans << endl;
}



int main(){
    int result = magicNumber(5);



    cout<<result << endl;

    return 0;
}



