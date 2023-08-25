#include<iostream>
using namespace std;

void display(int n,int board[][20]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<< board[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

bool safePlace(int board[][20],int n, int x, int y) {
    // column check
    for(int k=0;k<x;k++) {
        if(board[k][y] == 1) {
            return false;
        }
    }

    int i = x;
    int j = y;

    // left diagonal check
    while(i>=0 && j >=0) {
        if(board[i][j] == 1) {
            return false;
        }
        i--;
        j--;
    }

    i = x;
    j = y;
    // right diagonal check

    while (i >=0 && j < n)
    {
        if(board[i][j] == 1) {
            return false;
        }
        i--;
        j++;
    }
    // if queen is not places diagonals and column
    // return true
    return true;
    
}

int nQuuen(int n, int board[][20],int i) {
    if(n==i) {
        display(n,board);
        return 1;
    }

    int ways = 0;
    // goes for every column
    for(int j=0;j<n;j++) {
        if(safePlace(board,n,i,j)) {
            board[i][j] = 1;
            // can solve remaining subproblem
            ways += nQuuen(n,board,i+1);
            
            // removes quuen and puts it to next col
            board[i][j] = 0;
        }
    }
    // moves to previous row to change configuration
    // of quuen placement
    return ways;

}

int main() {
    int board[20][20] = {0};
    int n;
    cin>>n;

    nQuuen(n,board,0);
    return 0;
}
