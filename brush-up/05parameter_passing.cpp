#include<iostream>

using namespace std;

int add_value_pass(int a,int b){
    
    int c;
    c = a+b;
    return c;
}

// pointers are taken
void swap_by_pointer(int *x,int *y){
    int temp;

    //dereferenced
    temp = *x;
    *x = *y;
    *y = temp;
}


void swap_by_reference(int &x,int &y){
    int temp;

    //may became inline function
    temp = x;
    x = y;
    y = temp;
}


void pass_arr_by_address(int A[],int n){

    cout<<sizeof(A) / sizeof(int) <<endl;

    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    

}

int * createdArrinHeap(int size){

    int *p;
    p = new int[size];
    //p = (int *)malloc(size*sizeof(int));
    
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;

}


struct Rectangle{
    int length;
    int breath;
};

void pass_struct_byValue(struct Rectangle r){

    cout<<"Length"<< r.length<< endl<<"Breath"<< r.breath<< endl;

}

void pass_struct_byAddress(struct Rectangle *p){
    p->length=20;
    p->breath=10;
}

// returns address of struct from heap
struct Rectangle * func(){
    struct Rectangle *p;
    p = new Rectangle;
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length=15;
    p->breath=7;
    return p;
}

int main(){

    // int num1 = 10;
    // int num2 = 15;
    // int sum;

    // sum = add_value_pass(num1,num2);

    // // addresses are passed
    // swap_by_pointer(&num1,&num2);

    // int A[] = {2,4,6,7,10,12};
    // int n =6;

    // for(int x:A){
    //     cout<<x<<endl;
    // }

    // pass_arr_by_address(A,5);


    // int *ptr,size = 5;
    // ptr = createdArrinHeap(size);

    // for(int i=0;i<size;i++){
    //     cout<<ptr[i]<<endl;
    // }


    struct Rectangle r={10,5};


    pass_struct_byValue(r);

    pass_struct_byAddress(&r);

    printf("Length %d \nBreath %d\n",r.length,r.breath);
    
    struct Rectangle *ptr = func();
    
    return 0;

}