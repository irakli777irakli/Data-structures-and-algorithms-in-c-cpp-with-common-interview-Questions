#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
given the str return all possible subsets
str = "abc"
a,b,c,ab,ac,bc,abc
in each call whether take the letter or not is subset pattern

*/

void subset(string p, string up) {
    if(up.empty()) {
        cout << p << endl;
        return;

    }
        char ch = up.at(0);
        // taking
        subset(p+ch,up.substr(1));
        //ignoring
        subset(p,up.substr(1));
}

vector<string> subset2(string p, string up) {
    if(up.empty()) { 
        vector<string> list;
        list.push_back(p);
        return list;
    }

    char ch = up.at(0);
    vector<string> left = subset2(p+ch,up.substr(1));
    vector<string> right = subset2(p,up.substr(1));

    left.insert(left.end(), right.begin(), right.end());
    return left;
}

void findSubsets(char input[], char output[],int i, int j,vector<string> &v) {
    if(input[i] == '\0') {
        output[j] = '\0';
        string temp(output);
        v.push_back(temp);
        return;
    }

    output[j] = input[i];
    findSubsets(input,output,i+1,j+1,v);
    
    findSubsets(input,output,i+1,j,v);
}

bool comprare(string a, string b) {
    if(a.length() == b.length()) {
        return a < b;
    }

    return a.length() == b.length();
}

int main() {
    vector<string> result =  subset2("","abc");
    for(string x : result) {
        cout << x << endl;
    }

    char input[100];
    char output[100];
    vector<string> v;
    cin>>input;

    findSubsets(input,output,0,0,v);

    sort(v.begin(),v.end(),comprare);

    for(auto s : v) {
        cout << s << ",";
    }


    return 0;
}
