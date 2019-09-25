#include<iostream>
#include"colorcodes.h"
using namespace std;

class Employee {
	string Name;
	unsigned int Age;
	unsigned int YOS;
	unsigned int Salary;
	public:
		void set_data() {
			cout << "Enter name: " << endl;
			getline(cin,Name);
			cout << "Enter the age: " << endl;
			cin >> Age;
			cout << "Enter the YOS: " << endl;
			cin >> YOS;
			cout << "Enter the salary: " << endl;
			cin >> Salary;
		}
		void get_sal() {
			cout << WHITEBG << BLACK ;
			cout << "the salary of \" " << this->Name << " \" is" << endl;
			cout << GREEN << this->Salary << endl;
			cout << RESETC;
		}
};

int main(void)
{
	Employee One;
	One.set_data();
	One.get_sal();
	return 0;
}
