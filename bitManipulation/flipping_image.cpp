#include<iostream>
#include<vector>
using namespace std;


/*
Input: image = [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]

reverse every row of array and inverse bits

*/


void flip_image(vector<vector<int>> &image){
    for(int i=0;i<image.size();i++){
        int k = 0;
        int j = image[i].size()-1;

        while(k <= j){
            int temp = image[i][k] ^ 1;
            image[i][k] = image[i][j] ^ 1;
            image[i][j] = temp;

            k++;
            j--;
        }
    }
    
}


int main(){
  vector<vector<int>> image = {
    {1,1,0},
    {1,0,1},
    {0,0,0}
  };

  flip_image(image);

for(int i=0;i<image.size();i++){
        for(int j=0;j<image[i].size();j++){
            cout << image[i][j] ;
        }

        cout << endl;
    }
  
}


