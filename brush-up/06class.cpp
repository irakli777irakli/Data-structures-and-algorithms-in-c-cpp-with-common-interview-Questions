#include<iostream>

using namespace std;


class Rectangle{
private:
    int length;
    int breadth;


public:
    Rectangle(){
        length=0;
        breadth=0;
    }

    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }

    int area(){
        return length * breadth;
    }

    int parameter(){
        return 2*(length+breadth);
    }

    void setLength(int l){
        length = l;
    }
    
    void setBreadth(int b){
        breadth=b;
    }

    int getLength(){
        return length;
    }

    int getBreadth();

    ~Rectangle(){
        cout<<"Destructured";
    }
    

};
int Rectangle::getBreadth(){
    return breadth;
}

int main(){
     Rectangle r(10,5);
        cout<<"Area "<<r.area() <<endl;
    

    return 0;
}












