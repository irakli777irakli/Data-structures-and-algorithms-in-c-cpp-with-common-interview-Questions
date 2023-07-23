#include<stdio.h>




void main(){
    int *A,n,ch,x,i,j;

    printf("Enter dimension");
    scanf("%d",&n);
    A = new int[n];

    do {
        switch(ch){
            case 1:
                for(i=1;i<=n;i++){
                    scanf("%d",&A[i-1]);
                }
            break;
            case 2:
                printf("Enter indices");
                scanf("%d%d",&i,&j);
                if(i==j) printf("%d",A[i-1]);
                else printf("0");
                break;
            case 3:
                printf("Enter row, column, element");
                scanf("%d%d%d",&i,&j,&x);
                if(i==j) A[i-i] = x;
                break;
            case 4:
                for(i=1;i<=n;i++){
                    for(j=1;j<=n;j++){
                        if(i==j) printf("%d",A[i-1]);
                        else printf("0");
                        break;
                    }
                }
        }
    }while(ch < 4);


}












