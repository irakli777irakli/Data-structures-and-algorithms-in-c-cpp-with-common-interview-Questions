#include<stdio.h>


void tail_recurse(int n){
    if(n>0){
        printf("%d ",n);
        tail_recurse(n-1);
    }
}



int main(){
    int x = 3;
    tail_recurse(x);

}