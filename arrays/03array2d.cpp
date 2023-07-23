#include<stdio.h>
#include<stdlib.h>





int main(){
    int A[3][4] = {
        {1,2,3,4},
        {2,3,4,6},
        {1,3,7,9}
    };

    // array of pointers in stack points to array of integers in heap
    int *B[3];
    B[0] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));
    B[3] = (int *)malloc(4*sizeof(int));

    // pointer in stack points to 1 pointer of array of 3 elements in heap which point to array in heap
    int **C;
    C=(int **)malloc(3*sizeof(int *));
    C[0]= (int *)malloc(4*sizeof(int));
    C[1]= (int *)malloc(4*sizeof(int));
    C[2]= (int *)malloc(4*sizeof(int));
    
    return 0;
}

