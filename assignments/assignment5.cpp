//WAP, to sort the data in ascending order.

#include<iostream>
using namespace std;

void ar_sort(int *, int);

int main(void)
{
    int *p_arr, arr_size;
    cout << "Enter the size of the array: " << endl;
    cin >> arr_size;
    p_arr = new int[arr_size];
    cout << "Enter array elements: " << endl;
    for(int i = 0; i < arr_size ; i++)
    {
        cin >> p_arr[i];
    }
    cout << "--------------------- > Before sorting : " << endl;
    for(int i = 0; i < arr_size ; i++)
    {
        cout << p_arr[i] << "  ";
    }
    cout << endl;
    ar_sort(p_arr, arr_size);
    cout << "--------------------- > After sorting : " << endl;
    for(int i = 0; i < arr_size ; i++)
    {
        cout << p_arr[i] << "  ";
    }
    cout << endl;
    return 0;
}


void ar_sort(int *dp, int count)
{
    int temp;
    for(int i = 0; i < count - 1 ; i++)
    {
        for(int j = i+1; j < count ; j++)
        {
            if(dp[i] > dp[j])
            {
                temp = dp[i];
                dp[i] = dp[j];
                dp[j] = temp;
            }
        }
    }
}