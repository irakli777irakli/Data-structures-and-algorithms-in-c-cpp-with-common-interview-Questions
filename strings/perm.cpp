#include<iostream>
using namespace std;

void perm(char s[], int k){
    static int A[10] ={0};
    static char Res[10];

    int i;
    
    if(s[k] == '\0'){
        Res[k] = '\0';
        cout<<Res <<endl;
    }
    else{
        for(i=0;s[i]!='\0';i++){
            if(A[i] == 0){
                Res[k] = s[i];
                A[i] = 1;
                perm(s,k+1);
                A[i] = 0;
            }
        }
    }


}

/*
recursive calls are dependent on proccesseds `p` length

*/
void permutation2(string p, string up) {
    if(up.empty()) {
        cout << p << endl;
        return;
    }

    char ch = up.at(0);
    for (int i = 0; i <= p.length(); i++)
    {
        string f = p.substr(0,i);
        string s = p.substr(i,p.length());
        permutation2(f+ch+s,up.substr(1));
    }
    


}


int main(){

    char s[] = "ABC";
    perm(s,0);

    permutation2("","abc");

    return 0;
}