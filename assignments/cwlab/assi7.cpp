//assignment operator overloading with a int parameter to the right using a friend function
//note: this is not possible using member functions, only with friend function possible

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
	friend A operator + (const int &n, const A &temp);
	friend A operator + (const A &temp1, const A &temp2);
};

A operator + (const A &temp, const int &n) {
	A result;
	result.x = temp.x + n;
	result.y = temp.y + n;
	return result;
}

A operator + (const int &n, const A &temp) {
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
	obj2 = 100 + obj1;
	obj2.get_data();
}
