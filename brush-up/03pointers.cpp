#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    int a=10;

    int *p;
    p=&a;

    cout<<*p<<endl;

    free(p); // C

    int A[6] ={2,1,6,7,8,11};

    int *arrP;
    arrP = A;

    for (int i = 0; i < 6; i++)
    {
        cout<<arrP[i]<<endl;
    }
    
    free(arrP);

    int *arrPInHeap;
    arrPInHeap = (int *)malloc(5*sizeof(int));
    // arrPInHeap = new int[5]; c++ version

    arrPInHeap[0]=10;
    arrPInHeap[1]=11;
    arrPInHeap[2]=89;
    arrPInHeap[3]=91;
    arrPInHeap[4]=14;

    for (int i = 0; i < 5; i++)
    {
        cout<<arrPInHeap[i]<<endl;
    }

    delete []arrPInHeap; // C++


    // static object in stack
    struct Rectangle r ={10,5};
    struct Rectangle *rectP= &r;
    (*rectP).length=20;
    rectP->breadth=10;

    // dynamic object in heap
    struct Rectangle *rectPinHeap;
    rectPinHeap = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    //rectPinHeap = new Rectangle; // C++
    rectPinHeap->breadth=10;
    rectPinHeap->length=5;




    return 0;


}
