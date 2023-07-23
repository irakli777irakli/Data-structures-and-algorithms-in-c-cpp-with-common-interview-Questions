#include <stdio.h>
#include<iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    Queue(){
        front=rear=-1;
        size=10;
        Q=new int[size];
    }
    Queue(int size){
        front=rear=-1;
        this->size=size;
        Q=new int[this->size];
    }
    
    void enqueu(int x);
    int dequeu();
    void Display();


};

void Queue:: enqueu(int x){
    if(rear==size-1)
        printf("Queue full\n");
    else{
        rear++;
        Q[rear]=x;
    }

}

int Queue::dequeu(){
    int x=-1;
    if(front == rear)
        printf("Queueu is empty");
    
    else{
        x=Q[front+1];
        front++;
    }

    return x;
}

int main(){


    return 0;
}