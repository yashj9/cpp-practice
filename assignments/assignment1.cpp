//WAP, to reverse the contents of an array. (by DMA)

#include<iostream>
#include"../colorsfile.h"

using namespace std;

int main(void)
{
    int *p_array, size_a;
    cout << "Enter number of elements for an array:" << endl;
    cin >> size_a;
    p_array = new int[size_a];
    cout << "Enter values: " << endl;
    for(int i = 0; i < size_a ; i++)
    {
        cin >> p_array[i] ;
    }
    cout << "***************** Before reverse ****************" << endl;
    for(int i = 0; i < size_a ; i++)
    {
        cout << p_array[i] << "  ";
    }
    cout << endl;
    cout << "***************** After reverse ***************" << endl;
    for(int i = 0, j = size_a - 1, temp; i < j ; i++ , j--)
    {
        temp = p_array[i];
        p_array[i] = p_array[j];
        p_array[j] = temp;
    }
    for(int i = 0; i < size_a ; i++)
    {
        cout << p_array[i] << "  ";
    }
    cout << endl;
    return 0;
}