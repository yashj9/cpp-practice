//overloading unary - operator with a friend function

#include<iostream>

using namespace std;

class A {
    int x,y;
    public:
        A() {}
        A(int a, int b) : x(a) , y(b) {}
        void get_data(void) {
            cout << "x - " << x << "  " << "y - " << y << endl;
        }
    friend A operator - (A); 
};

A operator - (const A temp) {
    A ret;
    ret.x = -temp.x;
    ret.y = -temp.y;
    return ret;
}

int main(void) {
    A obj1(10,20), obj2;
    obj2 = -obj1;
    obj2.get_data();
}