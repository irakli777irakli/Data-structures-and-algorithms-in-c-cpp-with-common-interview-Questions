#include<iostream>
using namespace std;



int first_occ(int arr[],int n,int key){

    if(n==0){
        return -1;
    }

    if(arr[0] == key){
        return 0;
    }

    int subIndex = first_occ(arr +1,n-1,key);

    if(subIndex != -1){
        return subIndex +1;
    }

    return -1;

}

int last_occurence(int arr[],int n,int key)
{
    if(n == 0){
        return -1;
    }

    int subIndex = last_occurence(arr+1,n-1,key);
    if(subIndex == -1){
        if(arr[0] == key){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return subIndex + 1;
    }
}





int main(){
    int arr[] = {1, 3, 5, 7, 6, 2,3, 21};
    int n = sizeof(arr) / sizeof(int);

    int k = 3;
    cout << last_occurence(arr,n,k);

    return 0;
}
