//WAP , to find the biggest and smallest number from an array

#include<iostream>
using namespace std;

int find_big(int *, int);
int find_small(int *, int);

int main(void)
{
    int *int_array, size_ar, big, small;
    cout << "Give size for the array : " << endl;
    cin >> size_ar ;
    int_array = new int[size_ar];
    cout << "default value of array[0] is : " << int_array[0] << endl;
    cout << "Give values for the array: " << endl;
    for(int i = 0; i < size_ar ; i++)
    {
        cin >> int_array[i];
    }
    big = find_big(int_array, size_ar);
    small = find_small(int_array, size_ar);
    cout << "---------------" << endl;
    for(int i = 0; i < size_ar; i++)
    {
        cout << int_array[i] << "  ";
    }
    cout << endl;
    cout << "---------------" << endl;
    cout << "the Biggest integer in the given array is: " << big << endl;
    cout << "the Smallest integer in the given array is: " << small << endl;
}

int find_big(int *p, int a)
{
    int big = p[0], i;
    for(i = 0; i < a ; i++)
    {
        if(p[i] > big)
        {
            big = p[i];
        }
    }
    return big;
}

int find_small(int *p, int a)
{
    int small = p[0], i;
    for(i = 0; i < a ; i++)
    {
        if(p[i] < small)
        {
            small = p[i];
        }
    }
    return small;
}