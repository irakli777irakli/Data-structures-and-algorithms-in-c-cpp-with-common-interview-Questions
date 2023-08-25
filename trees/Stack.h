#include<stdio.h>
#include<stdlib.h>
#include "Queue.h"

struct Stack{
    int size;
    int top;
    struct Node **S;
};

void StackCreate(struct Stack *st, int size){
    st->size=size;
    st->top=-1;
    st->S=(struct Node *)malloc(st->size *sizeof(struct Node *));


}

void Display(struct Stack st){
    int i;
    for(i=st.top;i>=0;i++){
        printf("%d ",st.S[i]);
    }
    printf("\n");
}



void push(struct Stack *st,struct Node *x){
    if(st->top == st->size-1)
        printf("Stack oveflow\n");
    
    else{
        st->top++;
        st->S[st->top]=x;
    }
}


struct Node *pop(struct Stack *st){
    struct Node *x = NULL;

    if(st->top == -1)
        printf("stack underflow");
    else{
        x= st->S[st->top--];
    }
    return x;

}

// int peek(struct Stack st, int index){

//     int x=-1;
//     if(st.top-index+1 < 0)
//         printf("invalid index");

//     x= st.S[st.top-index+1];

//     return x;

// }

int IsEmptyStack(struct Stack st ){
    if(st.top == -1)
        return 1;
    
    return 0;
}

int isFullStack(struct Stack st){
    if(st.top == st.size-1)
        return 1;
    
    return 0;


}

// int stackTop(struct Stack st){
//     if(!IsEmpty(st))
//         return st.S[st.top];
    
//     return -1;
// }











