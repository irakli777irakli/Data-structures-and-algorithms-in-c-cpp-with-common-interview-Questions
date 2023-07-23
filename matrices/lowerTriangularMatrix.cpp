#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct Matrix
{
    int *A;
    int n;
};


void Set(struct Matrix *m,int i, int j, int x){
    if(i>=j){
        // column major
        // m->A[m->n*(j-1)-(j-2)*(j-1)/2+i-j]=x;
        m->A[i*(i-1)/2+j-1]=x;
    }
}

int Get(struct Matrix m, int i, int j){
    if(i>=j){
        return m.A[i*(i-1)/2+j-1];
    }
    return 0;
}

void Display(struct Matrix m){
    int i, j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i>=j){
                printf("%d ",m.A[i*(i-1)/2+j-1]);
            }else{
                printf("0 ");
            }
        }
            printf("\n");
    }
}


class LowerTriangular {
private:
    int n;
    int *A;

public:
    LowerTriangular(int n){
        this->n = n;
        this->A = new int[n*(n+1)/2];
    }

    ~LowerTriangular(){
        delete []A;
    }

     void Set(int i, int j, int x){
        if(i>=j){
            A[i*(i-1)/2+j-1] = x;
        }
    }

    int Get(int i, int j){
        if(i>=j){
            return A[i*(i-1)/2+j-1];
        }

        return 0;
    }

    void Display(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i>=j){
                    cout<<A[i*(i-1)/2+j-1]<<" ";
                }
                cout<<"0 ";
            }
        }
    }


};



int main(){
    struct Matrix m;
    int i, j, x;
    printf("Enter DImension");
    scanf("%d",&m.n);
    m.A=(int *)malloc(m.n*(m.n+1)/2 * sizeof(int));

    printf("enter all elements");

    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            scanf("%d",&x);
            Set(&m,i,j,x);
        }
    }
    printf("\n\n");
    Display(m);

}




















