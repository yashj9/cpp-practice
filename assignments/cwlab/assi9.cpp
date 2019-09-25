//implementation of + , - , * , / , operators overloading using friend functions

#include<iostream>

using namespace std;

class A {
	int a, b;
	public:
	A() {}
	A(int a, int b) : a(a), b(b) {}
	void get_data(void) {
		cout << "a - " << a << "  ";
		cout << "b - " << b << endl;
	}
	friend A operator + (const A &temp1, const A &temp2);
	friend A operator - (const A &temp1, const A &temp2);
	friend A operator * (const A &temp1, const A &temp2);
	friend A operator / (const A &temp1, const A &temp2);
};


A operator + (const A &temp1, const A &temp2) {
	A result;
	result.a = temp1.a + temp2.a;
	result.b = temp1.b + temp2.b;
	return result;
}
A operator - (const A &temp1, const A &temp2) {
	A result;
	result.a = temp1.a - temp2.a;
	result.b = temp1.b - temp2.b;
	return result;
}
A operator * (const A &temp1, const A &temp2) {
	A result;
	result.a = temp1.a * temp2.a;
	result.b = temp1.b * temp2.b;
	return result;
}
A operator / (const A &temp1, const A &temp2) {
	A result;
	if(temp2.a != 0)
	{
		result.a = temp1.a / temp2.a;
	}
	else
	{
		cout << "Not a Number, Cannot be devided with \'0\' " << endl;
		result.a = 0;
	}
	if(temp2.b != 0)
	{
		result.b = temp1.b / temp2.b;
	}
	else
	{
		cout << "Not a Number, Cannot be devided with \'0\' " << endl;
		result.b = 0;
	}
	return result;
}

int main(void) {
	A obj1(2,2), obj2(2,2), obj3(2,2), obj4(2,2), obj5(2,2), obj6;
	obj6 = obj1 + obj2 * obj3 - obj4 / obj5;
	obj6.get_data();
}
