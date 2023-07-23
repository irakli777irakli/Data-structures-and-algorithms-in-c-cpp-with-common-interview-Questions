#include<stdio.h>
#define SIZE 10

int hash(int key){
    return key % SIZE;
}

int prob(int HT[],int key){
    int index = hash(key);
    int i=0;

    while(HT[(index+i)%SIZE]!=0){
        i++;
    }
    return (index+i)%SIZE;
}

void Insert(int HT[],int key){
    int index = hash(key);

    if(HT[index]!=0){
        index=prob(HT,key);
    }
    HT[index]=key;
}

int Search(int HT[], int key){
    int index=hash(key);

    int i=0;
    while(HT[(index+i)%SIZE]!=key){
        i++;
    }
    return (index+i)%SIZE;
}




int main(){
    int HT[10]={0};

    Insert(HT,12);
    Insert(HT,25);
    Insert(HT,35);
    Insert(HT,26);

    printf("key found at index %d ", Search(HT,35));
    return 0;
}