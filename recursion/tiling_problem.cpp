#include<iostream>
using namespace std;


int tiles(int n){
    if(n<=3)
        return 1;
    
    return tiles(n-1) + tiles(n-4);
}


int main(){
    
    cout<< tiles(4);

    return 0;

}