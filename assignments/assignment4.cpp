//WAP, to find sum of all odd elements and product of all even elements in an array

#include<iostream>
using namespace std;

int odd_sum(int *, int);
int even_prod(int *, int);

int main(void)
{
    int *p_arr, sum=0, prod=1, leng_ar;
    cout << "Enter the size of the array: " << endl;
    cin >> leng_ar;
    p_arr = new int[leng_ar];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < leng_ar ; i++)
    {
        cin >> p_arr[i];
    }
    sum = odd_sum(p_arr, leng_ar);
    prod = even_prod(p_arr, leng_ar);
    cout << "--------------------" << endl;
    for(int i = 0; i < leng_ar ; i++)
    {
        cout << p_arr[i] << "  ";
    }
    cout << endl;
    cout << "--------------------" << endl;
    cout << "The sum of all the odd numbers of the given array is : " << sum << endl;
    cout << "The product of all the even numbers of the given array is : " << prod << endl;
    return 0;
}

int odd_sum(int *p, int count)
{
    int res(0);
    for(int i = 0; i < count ; i++)
    {
        if(p[i] % 2)
        {
            res = res + p[i];
        }
    }
    return res;
}

int even_prod(int *p, int count)
{
    int res(1);
    bool f = false;
    for(int i = 0; i < count ; i++)
    {
        if(p[i] == 0)
        {
            continue;
        }
        if(p[i] % 2 == 0)
        {
            f = true;
            res = res * p[i];
        }
    }
    if(f)
    {
        return res;
    }
    return 0;
}