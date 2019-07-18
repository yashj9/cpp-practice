//what if we play around with static member variable

#include<iostream>

using namespace std;

class info;
class info2;

class info {
    public:
    static int count;
    static void get_data(info2 &temp);
    friend void info2::get_data(info &temp);
};

class info2 {
    public:
    static int count;
    static void get_data(info &);
    friend void info::get_data(info2 &temp);
};


int info::count;
int info2::count;

void info::get_data(info2 &temp) {
        cout << " In the call-- " << temp.count << endl; 
    }

void info2::get_data(info &temp) {
        cout << "Into call -- " << temp.count << endl;
    }

int main(void) {
    info A;
    info2 B;
    cout << A.count << endl;
    cout << B.count << endl;
    A.get_data(B);
    B.get_data(A);
}