#include<iostream>
using namespace std;

// go bellow square root of the number
bool isPrime(int n){
    if(n <= 1) return false;

    int i = 2;
    while(i * i <= n){
        if(n % i == 0)
            return false;
        
        i++;
    }
    return true;
}


int main(){
    int result = isPrime(31);
    cout << result << endl;
}