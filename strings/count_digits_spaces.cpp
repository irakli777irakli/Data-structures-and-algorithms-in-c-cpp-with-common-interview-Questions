#include<iostream>
using namespace std;

// count digits, spaces, and alphabets in string

int main(){
    char ch;

    ch = cin.get();

    int alpha = 0;
    int space = 0;
    int digit = 0;

    while(ch!='\n'){
        if(ch>='0' && ch<='9'){
            digit++;
        }

        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            alpha++;
        }

        else if(ch==' ' || ch=='\t'){
            space++;
        }


        ch= cin.get();
    }


    cout<<"Total alphabets "<<alpha<<endl;
    cout<<"Total spaces "<<space<<endl;
    cout<<"Total digits "<<digit<<endl;
}