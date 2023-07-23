#include<iostream>
using namespace std;


//smaple input 
//SNNNEWE
//sample output
//NNE

int main(){
    char route[100];

    cin.getline(route,100);

    int x=0;
    int y=0;

    for(int i=0;route[i] != '\0'; i++){
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }

    cout<<"Final x and y is "<<x<<","<<y<<".";


// 2rd                 1st                        
//             |y 
//             | 
//             |
//     -----------------
//             |       x
//             |
//             |
//  3nd                 4th
//

    // 1st
    if(x>=0 && y>=0){
        while(y--)
            cout<<'N';
        
        while(x--)
            cout<<'E';
    }

    // 3nd
    if(x<=0 && y<=0){
        while(y++)
            cout<<'S';
        while(x++)
            cout<<'N';
    }
    // 4ed
    if(x>=0 && y<=0){
        while(x--)
            cout<<'N';
        while(y++)
            cout<<'S';
    }
    // 2nd
    if(x<=0 && y>=0){
        while(x++)
            cout<<'W';
        while(y--)
            cout<<'N';
    }

    

    return 0;
}