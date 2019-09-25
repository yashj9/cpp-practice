//assignment operator overloading with a int parameter to the left using a friend function

#include<iostream>

using namespace std;

class A {
	int x, y;
	public:
	A() {}
	A(int a, int b):x(a),y(b) {}
	void get_data(void) {
		cout << "x - " << x << " ";
		cout << "y - " << y << endl;
	}
	friend A operator + (const A &temp, const int &n);
	friend A operator + (const A &temp1, const A &temp2);
};

A operator + (const A &temp, const int &n) {
	A result;
	result.x = temp.x + n;
	result.y = temp.y + n;
	return result;
}

A operator + (const A &temp1, const A &temp2) {
	A result;
	result.x = temp1.x + temp2.x;
	result.y = temp1.y + temp2.y;
	return result;
}

int main(void) {
	A obj1(100, 200) , obj2;
	obj2 = obj1 + 100;
	obj2.get_data();
}
