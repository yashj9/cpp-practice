//WAP, to declare 3 classes, declare int array as a data member in 3 classes, implement proper member fun()s for set data and get data, perform addition (through a non member fun()) of two data members and store the result in 3rd class data member using friend fun().

#include<iostream>

using namespace std;

class B;

class C;

class A {
    int arr[5];
    public:
    void set_data(void) {
        cout << "Enter 5 elements: " << endl;
        for(int i = 0; i < 5 ; i++)
        {
            cin >> arr[i];
        }
    }
    void get_data(void) {
        cout << "The data in class A is : " << endl;
        for(int i = 0; i < 5 ; i++)
        {
            cout << arr[i] << endl;
        }
    }
    friend void add_class (A&,B&,C&);
};

class B {
    int arr[5];
    public:
    void set_data(void) {
        cout << "Enter 5 elements: " << endl;
        for(int i = 0; i < 5 ; i++)
        {
            cin >> arr[i];
        }
    }
    void get_data(void) {
        cout << "The data in class B is : " << endl;
        for(int i = 0; i < 5 ; i++)
        {
            cout << arr[i] << endl;
        }
    }
    friend void add_class (A&,B&,C&);
};

class C {
    int arr[5];
    public:
    void set_data(void) {
        cout << "Enter 5 elements: " << endl;
        for(int i = 0; i < 5 ; i++)
        {
            cin >> arr[i];
        }
    }
    void get_data(void) {
        cout << "The data in class C is : " << endl;
        for(int i = 0; i < 5 ; i++)
        {
            cout << arr[i] << endl;
        }
    }
    friend void add_class (A&,B&,C&);
};

void add_class (A &a, B &b, C &c) {
    for(int i = 0; i < 5 ; i++)
    {
        c.arr[i] = a.arr[i] + b.arr[i];
    }
}

int main(void) {
    A a;
    B b;
    C c;
    a.set_data();
    b.set_data();
    a.get_data();
    b.get_data();
    add_class(a,b,c);
    c.get_data();
}