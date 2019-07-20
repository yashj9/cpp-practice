//operator -- overloading using member functions 

#include<iostream>

using namespace std;

class A {
    int x, y;
    public:
        A() {}
        A(int a, int b) : x(a) , y(b) {}
        void get_data(void) {
            cout << "x - " << x << "  " << "y - " << y << endl;
        }
        A operator -- (int) {
            A ret;
            ret.x = x;
            ret.y = y;
            x--;
            y--;
            return ret;
        }
        A operator -- ();
};

A A::operator-- () {
    x--;
    y--;
    return *this;
}

int main(void) {
    A obj1(10,20) , obj2;
    obj2 = --obj1;
    obj1.get_data();
    obj2.get_data();
}