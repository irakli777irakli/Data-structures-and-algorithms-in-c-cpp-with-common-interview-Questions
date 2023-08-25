#include<iostream>
#include<cstring>
using namespace std;

/*
Give two non-empty strings, determine if second
string is subsequence of first one

str1 = ABBA
str2 = AA
Output true
*/
int isSubsequence(string a, string b) {
    int i = a.length();
    int j = b.length();

    while(i >=0 && j >= 0) {
        // if match move both pointers
        if(a[i] == b[j]) {
            i--;
            j--;
        }
        // if not move only first string pointer
        // we are matching against second string
        else {
            i--;
        }
    }
    // second string fininished
    if(j == -1) 
        return true;
    
    return false;
}


int main() {
    string a, b;
    cin>>a>>b;
    int result = isSubsequence(a,b);
    cout << result;
    return 0;
}