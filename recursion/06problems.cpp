#include<stdio.h>


int sum(int n){
    if(n==0)
        return 0;
    
    return sum(n-1) +n;
}

int power(int m, int n){
    if(n == 0)
        return 1;
    
    return power(m,n-1) *m;
}

int power1(int m, int n){
    if(n == 0)
        return 1;
    
    if(n%2==0)
        return power1(m*m,n/2);
    
    return m * power1(m*m,(n-1)/2);
}

double e(int x, int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }

    r = e(x,n-1);
    p = p*x;
    f = f*n;

    return r+p/f; 
    
}

double eHorner(int x, int n){
    static double s;
    if(n==0)
        return s;
    s =1+x*s/n;
    return eHorner(x,n-1);
}

int fibIterative(int n){
    int t0=0, t1=1, s, i;
    if(n <=1) return n;

    for(i=2;i<=n;i++){
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int F[10];

int mfib(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2] = mfib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = mfib(n-1);
        }

        return F[n-2] + F[n-1];
    }
}

int ncr(int n, int r){
    if(n ==r || r == 0){
        return 1;
    }
    return ncr(n-1,r-1) + ncr(n-1,r);
}

void TOH(int n, int A, int B, int C){
    if(n > 0){
        TOH(n,A,C,B);
        printf("(%d,%d)\n",A,C);
        TOH(n-1,B,A,C);
    }
}

int main(){
    double result = e(1,10);
    printf("%lf \n", result);

    int i;
    for(i=0;i<10;i++){
        F[i] = -1;
    }
    
    mfib(5);

    return 0;
}