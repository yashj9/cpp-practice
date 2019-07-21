//main function for my_string function calls and objs

#include"./headers/header.h"

int main(void) {
	my_string obj1, obj2("hi"), obj3(obj2), obj4, obj5, obj6, obj7;
	obj1 = obj2;
	obj1.get_data();
	obj2.get_data();
	obj3.get_data();
	obj4 = obj1 + obj2 + obj3;
	obj4.get_data();
	cin >> obj5;
	cout << obj5 << endl;
	obj6("yes");
	obj6[1] = 'E';
	for (int i = 0 ; i < 4 ; i++ )
	{
		cout << obj6[i];
	}
	cout << endl;
	obj7 = "yEs";
	if(obj6 == obj7)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	if(obj6 == "yES")
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << boolalpha;
	cout << (obj1<obj7) << endl;
	return 0;
}
