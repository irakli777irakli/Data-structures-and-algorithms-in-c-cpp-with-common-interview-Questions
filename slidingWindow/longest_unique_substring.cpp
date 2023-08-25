#include<iostream>
#include<string>
#include<set>
using namespace std;

/*
given a string of s= "abcaeba"
return max length of longest substring without duplicate characters
Output 3
*/

int longest_un_substring(string s) {
    set<char> Set;
    int longest= 0;
    int start = 0;
    int end = 0;

    while(start < s.size()) {
        auto it = Set.find(s[start]);

        // if not in set add and expand windows
        if(it==Set.end()) {
            if(start-end+1 > longest) 
                longest = start-end+1;

            Set.insert(s[start]);
            start++;
        }
        else {
            // contract from end
            Set.erase(s[end]);
            end++;
        }
    }
    return longest;



}


int main() {
    string s = "abcaeba";
    longest_un_substring(s);
    
    return 0;
}