#include<iostream>
#include<vector>
using namespace std;

/*
given array of integers find target, using recursive
linear search
Input [5,10,99,30], target 10
Output true


*/

bool find_Element(vector<int> arr, int target, int index)
{
    if(index == arr.size()) {
        return false;
    }
    // after first condition 2nd will not execute, function will be returned
    return arr[index] == target || find_Element(arr,target,index+1);

}



vector<int> findAllElements(vector<int> arr, int target, int index, vector<int> &list)
{
    if(index == arr.size()) {
        return list;
    }
    
    if(arr[index] == target) {
        list.push_back(index);
    }

    return findAllElements(arr,target,index+1,list);
}


int main() {


    vector<int> numbers {10,10,5,7,10,15,20};
    vector<int> list;
    vector<int> result = findAllElements(numbers,10,0,list);

    for (int index : result)
    {
        cout << "Target found at index: " << index << endl;
    }

    return 0;
}
