//wap , to define 3 classes and read() and display() the data for 3 classes using friend fun

#include<iostream>

using namespace std;

class Class1 {
	int a;
	int y;
	friend void read(Class1&);
	friend void display(Class1&);
};

class Class2 {
	int a;
	int y;
	friend void read(Class2&);
	friend void display(Class2&);
};

class Class3 {
	int a;
	int y;
	friend void read(Class3&);
	friend void display(Class3&);
};

void read(Class1 &temp)
{
	cout << "give data: " << endl << "a - " ;
	cin >> temp.a;
	cout << "y - " ;
	cin >> temp.y;
}

void read(Class2 &temp)
{
	cout << "give data: " << endl << "a - " ;
	cin >> temp.a;
	cout << "y - " ;
	cin >> temp.y;
}

void read(Class3 &temp)
{
	cout << "give data: " << endl << "a - " ;
	cin >> temp.a;
	cout << "y - " ;
	cin >> temp.y;
}

void display(Class1 &temp)
{
	cout << "data of class1 " << endl;
	cout << "a= " << temp.a << "y= " << temp.y << endl;
}

void display(Class2 &temp)
{
	cout << "data of class2 " << endl;
	cout << "a= " << temp.a << "y= " << temp.y << endl;
}

void display(Class3 &temp)
{
	cout << "data of class3 " << endl;
	cout << "a= " << temp.a << "y= " << temp.y << endl;
}

int main(void)
{
	Class1 c1;
	Class2 c2;
	Class3 c3;
	read(c1);
	read(c2);
	read(c3);
	display(c1);
	display(c2);
	display(c3);
}
