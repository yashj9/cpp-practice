//operator ++ overloading using friend function

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
    friend A operator ++ (A &,int);
    friend A operator ++ (A &);
};

A operator ++ (A &temp, int) {
    A ret;
    ret.x = temp.x;
    ret.y = temp.y;
    temp.x++;
    temp.y++;
    return ret;
}

A operator ++ (A &temp) {
    temp.x++;
    temp.y++;
    return temp;
}

int main(void) {
    A obj1(10,20), obj2;
    obj2 = obj1++;
    obj1.get_data();
    obj2.get_data();
}