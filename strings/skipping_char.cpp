#include<iostream>
using namespace std;
/*
Given a string acdeabad
remove all a in string and print it
(proccessed, unproccessed) {
    
}
1. stop when up is null
2. if up's first char is `a` dont add to p, recurse a's next char using substring
3. if up's first char is not `a` add chart to current `p` and recurse to it's next char
*/
void skip_char(string p, string up) {
    if(up.empty()) {
        cout << p << endl;
        return;
    }
    char ch = up.at(0);
    if(ch == 'a') {
        skip_char(p, up.substr(1));
    }
    else {
        skip_char(p + ch,up.substr(1));
    }
}

string skip_char(string up) {
    if(up.empty()) {
        return "";
    }

    char ch = up.at(0);
    if(ch == 'a') {
        return skip_char(up.substr(1));
    }
    else {
        return ch + skip_char(up.substr(1));
    }
}


int main() {
    skip_char("","cadabda");


    return 0;
}
