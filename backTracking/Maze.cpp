#include<iostream>
#include<vector>
using namespace std;



class Maze {


public:
    int countPaths(int r, int c) {
        if(r == 1 || c == 1)
            return 1;
        
        int left = countPaths(r-1,c);
        int right = countPaths(r,c-1);
        return left + right;
    }

    void printingPaths(string p, int r, int c) {
        if(r == 1 && c == 1) {
            cout << p << endl;
            return;
        }

        if(r > 1 && c > 1) {
            printingPaths(p+'D',r-1,c-1);
        }

        if(r > 1) {
            printingPaths(p+'V',r-1,c);
        }

        if(c > 1) {
            printingPaths(p+'H',r,c-1);
        }

    }

    

    
};


int main() {
    Maze maze;
  


    return 0;
}