#include<iostream>
#include"colorcodes.h"

using namespace std;

void swapref(int&, int&);

int main(void)
{
	int a, b;
	cout << GREENB << MAGENTABG ;
	cout << "ENter two integers: " << endl;
	cin >> a >> b;
	swapref(a,b);
	cout << BLUE ;
	cout << "After swaping: " << endl;
	cout << "a :- " << a << "   " << "b :- " << b << endl;
	cout << RESETC;
}

void swapref(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
