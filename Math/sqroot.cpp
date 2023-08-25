#include<iostream>
#include<math.h>
using namespace std;

double newtonsqrt(double n){
    double x = n;
    double root;
    while(true){
        root = 0.5 * (x + (n/x));
        // error function calculation
        if(abs(root - x < 1)){
            break;
        }

        x = root;
    }

    return root;
}

double sqrt(int n, int p){
    int s = 0;
    int e = n;

    double root = 0.0;

    while(s <= e){
        int mid = s + (e - s)/2;
        if(mid * mid == n)
        {
            root = mid;
            return root;
        }

        if(mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    double base = 0.1;


    for (int i = 0; i < p; i++)
    {
        while(root * root <=n){
            root += base;
        }

        root -= base;
        base = base / 10;
    }
    
    return root;


}


int main(){
    int n = 40;
    int p = 3;

    double result = sqrt(n,p);
    cout << result << endl;

    return 0;
}

