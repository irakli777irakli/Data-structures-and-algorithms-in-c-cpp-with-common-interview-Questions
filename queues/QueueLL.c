#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;


void enqueu(int x){
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)
        printf("Queue is full");
    else{
        t->data=x;
        t->next=NULL;
        if(front == NULL)
            front=rear =t;
        else{
            rear->next=t;
            rear=t;
        }
    }

}

int dequeu(){
    int x=-1;

    struct Node *t;
    if(front==NULL)
        printf("queueu is empty");
    else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}

void Display(){
    struct Node *p=front;
    while(p){

        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    enqueu(10);
    enqueu(20);
    enqueu(30);
    enqueu(40);
    Display();
    printf("%d ",dequeu());
    return 0;
}