#include<iostream>
using namespace std;

void printAllPairs(int arr[],int n){

    for(int i=0; i<n;i++){
        int x = arr[i];

        for(int j=i+1;j<n;j++){
            int y= arr[j];

            cout<< x<<"," <<y << endl;
        }
        cout << endl;
    }

}

int main(){
    int arr[] = {20, 30, 50 , 60};
    int n = sizeof(arr) / sizeof(int);

    for(int x : arr){
        cout<< x << endl;
    }

    printAllPairs(arr,n);

    return 0;
}