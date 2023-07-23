#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breath;
    char x;
};




int main(){

    struct Rectangle r1 ={10,5};
    r1.breath = 20;
    
    printf("%d",sizeof(r1));
    

    return 0;
}