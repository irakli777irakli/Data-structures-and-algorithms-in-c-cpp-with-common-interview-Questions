#include<iostream>
#include<vector>
using namespace std;

/*
given array of intigers return true if if sorted 
otherwise false
*/

bool sorted(vector<int> &arr, int index) {
    if(index == arr.size()-1)
        return true;
    
    return arr[index] < arr[index+1] && sorted(arr,index+1);
}

int main() {
    vector<int> inpt {1,5,3,4};
    int result = sorted(inpt,0);
    cout << result << endl;


    return 0;
}