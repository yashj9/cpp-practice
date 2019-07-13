// WAP, create 5 student class objects and give data to them and sort them.

#include<iostream>
using namespace std;

class Student {
    char name[10];
    int marks;
    public:
    void set_data(void) {
        cout << "Enter the name: " << endl;
        cin >> name ;
        cout << "Enter marks: " << endl;
        cin >> marks ;
    }
    void get_data(Student *temp) {
        cout << "-------" << " Get_Data output" << "-------" << endl;
        for(int i = 0; i < 5 ; i++)
        {
            cout << "Data number : " << i+1 << ")" << endl;
            cout << "   " << "name:  " << temp[i].name << endl;
            cout << "   " << "marks: " << temp[i].marks << endl;
        }
    }
    void sort_data(Student *temp) {
        cout << "-------------------" << endl << " * Sorted data * " << endl;
        Student swap;
        for(int j = 0; j < 5 ; j++)
        {
            for(int i = j+1 ; i < 5-1 ; i++)
            {
                if(temp[i].marks < temp[i+1].marks)
                {
                    swap = temp[i];
                    temp[i] = temp[i+1];
                    temp[i+1] = swap;
                }
            }
        }
        temp[0].get_data(temp);
    }
};

int main(void) {
    Student st[5];
    for(int i = 0; i < 5 ; i++)
    {
        st[i].set_data();
    }
    st[0].get_data(st);
    st[0].sort_data(st);
}