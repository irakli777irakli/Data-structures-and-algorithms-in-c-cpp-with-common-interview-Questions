#include<iostream>
using namespace std;

class Pattern {

public:
    void pattern1(int n) {
        /*
            * * * * 
            * * * * 
            * * * * 
            * * * * 
        */
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= n; col++)
            {
                cout << "* ";
            }
            cout << endl;
            
        }
        
    }

    void pattern2(int n) {
        /*
            *
            * *
            * * *
            * * * *
        */
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << "* ";
            }
            cout << endl;
            
        }
        
    }

    void pattern3(int n) {
        /*
            * * * *
            * * *
            * *
            *
        */
        for(int row = 1; row <= n; row++) {
            for(int col=1; col <= n-row+1; col++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    void pattern4(int n) {
        
        /*
            1
            1 2
            1 2 3 
            1 2 3 4
        */
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << col;
            }
            cout << endl;
            
        }
        
    }

    /*
    *
    * *
    * * *
    * * * *
    * * *
    * *
    * 
    */
    void pattern5(int n) {
        
        for (int row = 0; row <= 2 * n; row++)
        {
            int colsInRow = row > n ? 2 * n - row : row;
        
            for (int col = 0; col < colsInRow; col++)
            {
                cout << "* ";
            }

            cout << endl;
            
        }
        
    }

    void pattern28(int n) {
        for (int row = 0; row <= 2 * n; row++)
        {
            int colsInRow = row > n ? 2 * n - row : row;

            int noOfSpaces = n-colsInRow;
            for (int s = 0; s < noOfSpaces; s++)
            {
                cout<< " ";
            }
            

            for (int col = 0; col < colsInRow; col++)
            {
                cout << "* ";
            }

            cout << endl;
            
        }
        
    }

    void pattern17(int n) {
        for (int row = 1; row <= 2 * n; row++)
        {
            int c = row > n ? 2 * n - row : row;

            for (int space = 0; space < n-row; space++)
            {
                cout << " ";
            }

            for(int col=c; col >=1; col--) {
                cout << col << " ";
            }

            for(int col=2; col<= c; col++) {
                cout << col << " ";
            }

            cout << endl;
            

            
        }
        
    }
    
  
    void pattern30(int n) {
        for (int row = 1; row <= n; row++)
        {
            for (int spaces = 0;spaces < n-row;spaces++)
            {
                cout << " ";
            }
            

            for (int col = row; col >= 1; col--)
            {
                cout << col;
            }

            for (int col = 2; col <= row; col++)
            {
                cout << col;
            }
            cout << endl;
        }
        
    }
};



int main() {
    Pattern pattern;
    pattern.pattern5(4);

    return 0;
}