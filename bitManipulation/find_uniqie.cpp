#include<iostream>
using namespace std;

// find unique element in duplicated array
// use XOR operator 
// 0 ^ 0 = 0
// 1 ^ 0 = 1

int findUniqueEven(int arr[], int n){
    int first = arr[0];
    for(int i=1;i<n;i++){
        first ^= arr[i];
    }

    return first;
}

int findUniqueOdd(int arr[], int n){
   

    
}


int main(){
    int arr[] = {3,5,8,11,3,7,5,8,11};
    int arr2[] = {2,2,3,2,7,7,8,7,8,8};


    int result = findUniqueOdd(arr2,10);
    
    cout<< result << endl;

    return 0;
}