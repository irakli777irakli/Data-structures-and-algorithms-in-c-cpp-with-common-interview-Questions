#include<iostream>

using namespace std;


int main(){
    int n;
    cout<<"enter size";
    cin>>n;

    int A[n];
    A[0]=12;
    A[1]=15;

    for(int x: A){
        cout<<x<<endl;
    }

    cout<<sizeof(A)<<endl;
    printf("%d\n",A[1]);

   
}