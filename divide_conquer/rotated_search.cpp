#include<iostream>
#include<vector>
using namespace std;

int rotatedSearch(vector<int> a, int key)
{
    int n = a.size();

    int start = 0;
    int end = n -1;

    while(start<=end){
        int mid = (start+end) / 2;

        if(a[mid] == key){
            return mid;
        }

        // first line
        if(a[start] <= a[mid])
        {   
            // located in this line 
            if(key>=a[start] && key<=a[mid])
            {
                end = mid-1;
            }
            // located on second line
            else{
                start = mid + 1;
            }
        }

        // second line
        else{
            // located in second line
            if(key>=a[mid] && key<=a[end])
            {
                start = mid +1;
            }
            // located on first line 
            else
            {
                end = mid -1;
            }
        }
    }

    return -1;
}





int main(){
    vector<int> a{4,5,6,7,0,1,2};
    int key = 0;
    cout<<rotatedSearch(a,key) << endl;

    return 0;


}