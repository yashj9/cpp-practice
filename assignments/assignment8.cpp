//WAP, to exchange the values of 2 data members b/w 2 classes using friend fun().

#include<iostream>

using namespace std;

class Class2;

class Class1 {
    int x;
    int y;
    public:
        Class1() {
            x = 10 , y = 20;
        }
        void get_data(void);
    friend void exchng (Class1 &, Class2 &);
    friend void exchng (Class2 &, Class1 &);
};

class Class2 {
    int x;
    int y;
    public:
        Class2() {
            x = 100, y = 200;
        }
        void get_data(void);
    friend void exchng (Class1 &, Class2 &);
    friend void exchng (Class2 &, Class1 &);
};

void Class1::get_data(void) {
    cout << "Class 1 data : " << endl;
    cout << x << "  " << y << endl;
}

void Class2::get_data(void) {
    cout << "Class 1 data : " << endl;
    cout << x << "  " << y << endl;
}

void exchng (Class1 &c1, Class2 &c2) {
    int temp;
    temp = c1.x;
    c1.x = c2.x;
    c2.x = temp;
}

void exchng (Class2 &c2, Class1 &c1) {
    int temp;
    temp = c1.x;
    c1.x = c2.x;
    c2.x = temp;
}

int main(void) {
    Class1 c1;
    Class2 c2;
    exchng(c1,c2);
    c1.get_data();
    c2.get_data();
}