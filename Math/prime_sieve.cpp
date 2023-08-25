#include<iostream>
#include<vector>
using namespace std;

void sieve(int n, vector<bool> &primes){
    
    for(int i=2;i*i<=n;i++){
        if(primes[i]){
            for(int j=i*2;j<=n;j+=i){
                // 4, 8, 8, ... 38 will be marked as false
                // 6, 9, 12, 39 will be marked as false
                // this loop will go until `i<=sqr(n)`
                primes[j] = false;
            }
        }
    }
    for (int i=2;i<=n;i++)
    {
        if(primes[i])
            cout<< i << " ";

    }
}

int main(){
    int n = 40;
    vector<bool> primes(n+1,true);

    sieve(n, primes);


    return 0;
}