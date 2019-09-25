#include<iostream>
#include"colorcodes.h"

using namespace std;

void swapp(int&,int&);
void swapp(float&,float&);
void swapp(char&,char&);
void swapp(double&,double&);

int main(void)
{
	_BCPI1
	float x, y;   //edit this line to desired datatype for checking function overloading
	cout << "Enter two values (int/char/float/double) , to be swapped: " << endl;
	cout << "x= ";
	cin >> x ;
	cout << "y= ";
	cin >> y;
	swapp(x,y);
	_BCPO1
	cout << "After Swapped : " << endl;
	cout << "x= " << x << "   " << "y= " << y << endl;
	_CLRC
}

void swapp(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}

void swapp(char &a,char &b)
{
	char t;
	t=a;
	a=b;
	b=t;
}

void swapp(float &a,float &b)
{
	float t;
	t=a;
	a=b;
	b=t;
}

void swapp(double &a,double &b)
{
	double t;
	t=a;
	a=b;
	b=t;
}
