#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


/*
given an array of intgers 
return longest consecutive subsequence 
Input [1,9,3,0,2,10,18,17]
Output 4
explanation [0,1,2,3,4]
approach
1. sort and take consequative elements using loop
2. use unordered_map to determine which element
starts the sequence and count from that

*/

int largest_band(vector<int> arr) {
    int n = arr.size();

    unordered_set<int> s;
    for(int x : arr) {
        s.insert(x);
    }

    int largestBandLen = 1;

    for(int element : s) {
        int parent = element - 1;

        // curr element does not have parent
        // start counting from it 
        if(s.find(parent)==s.end()) {
            int next_no = element + 1;
            int count = 1;

            // if next element is present in unordered_set
            // inc count
            while(s.find(next_no) != s.end()) {
                next_no++;
                count++;
            }

            // after band each band ends update largestBandlen
            if(count > largestBandLen) {
                largestBandLen = count;
            }
        }
    }

    return largestBandLen;


}



int main() {
    vector<int> arr {1,9,3,0,2,10,18,17};
    cout << largest_band(arr);

    return 0;
}