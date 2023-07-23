#include<iostream>

using namespace std;


void printSubArrays(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<< endl;
        }
        cout <<endl;
    }
}

void largestSubArraySum1(int arr[],int n){
    int currsum = 0;
    int largest_sum = 0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                currsum+=arr[k];
            }
            if(largest_sum < currsum){
                largest_sum= currsum;
            }
            currsum = 0;
        }
    }

    cout<<largest_sum;
}

// prefix sum
void largestSubArraySum2(int arr[],int n){
    int * prefix = new int[n];
    prefix[0] = arr[0];

    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    int largest_sum = 0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           int subarraySum = i > 0 ? prefix[j] - prefix[i-1] : prefix[j];

            largest_sum = max(largest_sum,subarraySum);
           
        }
    }

    cout<<largest_sum;
}


void largestSubArraySum2(int arr[],int n){
    int current_sum = 0;
    int largest_sum = 0 ;

    for(int i=0;i<n;i++){
        current_sum += arr[i];
        
        if(current_sum < 0){
            current_sum = 0;
        }

        largest_sum = max(current_sum,largest_sum);
    }


}



int main(){
    int arr[] = {-2,3,4,-1,5,-12,1,3};
    int n = sizeof(arr) / sizeof(int);

    largestSubArraySum2(arr,n);
}