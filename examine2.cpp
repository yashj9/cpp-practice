//what if namespace and class have same name?

#include<iostream>

using namespace std;

using namespace x {
    int x;
    void test (void);
}

class x {
    int x;
    public:
    void test (void);
};

void x::test (void) {
        cout << "test in namespace" << endl;
}

int main(void) {
    x two;
    test ();
    two.test();
}