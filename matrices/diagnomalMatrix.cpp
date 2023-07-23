#include<stdio.h>
#include<iostream>
using namespace std;


struct Matrix
{
    int A[10];
    int n;
};

void Set(struct Matrix *m,int i, int j, int x){
    if(i==j){
        m->A[i-1]=x;
    }
}

int Get(struct Matrix m,int i, int j){
    if(i==j){
        return m.A[i-1];
    }

    return 0;
}

void Display(struct Matrix m){
    int i, j;
    for(i=0;i<m.n;i++){
        for(j=0;j<m.n;j++){
            if(i==j){
                printf("%d ",m.A[i]);
            }else{
                printf("0 ");
            }
        }
            printf("\n");
    }
}


class Diagonal {
private:
    int n;
    int *A;

public:
    Diagonal(int n){
        this->n = n;
        this->A = new int[n];
    }

    ~Diagonal(){
        delete []A;
    }

     void Set(int i, int j, int x){
        if(i==j){
            A[i-1] = x;
        }
    }

    int Get(int i, int j){
        if(i==j){
            return A[i-1];
        }

        return 0;
    }

    void Display(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    cout<<A[i]<<" ";
                }
                cout<<endl;
            }
        }
    }


};

int main(){
    struct Matrix m;
    m.n = 4;

    Set(&m,1,1,5);
    Set(&m,2,2,8);
    Set(&m,3,3,9);
    Set(&m,4,4,18);
    
    Display(m);
    return 0;
}