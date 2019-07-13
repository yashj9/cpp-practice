//use to examine certain doubts

#include<iostream>

using namespace std;

struct st1
{
    int x;
};


int main(void) {
    st1 abc , def;
    //cout << "Give value" << endl;
    //cin >> abc.x;
    abc.x = 5 , def.x = 7;
    cout << "The value given is : " << abc.x << endl;
    cout << "The value given is : " << def.x << endl;
    return 0;
}