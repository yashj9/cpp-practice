//implementation of + , - , * , / , operators overloading using member functions

#include<iostream>

using namespace std;

class A {
	int a, b;
	public:
	A() {}
	A(int a, int b) : a(a), b(b) {}
	A operator + (const A &temp) {
		A result;
		result.a = a + temp.a;
		result.b = b + temp.b;
		return result;
	}
	A operator - (const A &temp) {
		A result;
		result.a = a - temp.a;
		result.b = b - temp.b;
		return result;
	}
	A operator * (const A &temp) {
		A result;
		result.a = a * temp.a;
		result.b = b * temp.b;
		return result;
	}
	A operator / (const A &temp) {
		A result;
		if(temp.a != 0)
		{
			result.a = a / temp.a;
		}
		else
		{
			cout << "Not a Number, Cannot be devided with \'0\' " << endl;
			result.a = 0;
		}
		if(temp.b != 0)
		{
			result.b = b / temp.b;
		}
		else
		{
			cout << "Not a Number, Cannot be devided with \'0\' " << endl;
			result.b = 0;
		}
		return result;
	}
	void get_data(void) {
		cout << "a - " << a << " ";
		cout << "b - " << b << endl;
	}
};

int main(void) {
	A obj1(2,2), obj2(2,2), obj3(2,2), obj4(2,2), obj5(2,2), obj6;
	obj6 = obj1 + obj2 * obj3 - obj4 / obj5;
	obj6.get_data();
}
