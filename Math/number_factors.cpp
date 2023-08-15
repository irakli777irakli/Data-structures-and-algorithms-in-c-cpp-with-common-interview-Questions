#include<iostream>
#include<math.h>
using namespace std;

void factor1(int n){
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cout<< n << " is divisible by " << i << endl;
    }
    
}

// after square root of the number the solution will repeat
void factor2(int n){
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0){
            if(n/i == i){
                cout<< i << " ";
            }
            cout<< i << " " << n/i << " ";
        }
    }
    
}


int main(){
    factor2(20);

    return 0;
}
