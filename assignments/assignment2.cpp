//WAP, to find perfect numbers from an array, then sum of all the perfect numbers

#include<iostream>

using namespace std;

int sum_perfect(int *, int);

int main(void)
{
    int *p, size_ar, the_sum;
    cout << "Size of array: " << endl;
    cin >> size_ar;
    p = new int[size_ar];
    cout << "Enter the elements : " << endl;
    for(int i = 0; i < size_ar ; i++)
    {
        cin >> p[i];
    }
    the_sum = sum_perfect(p, size_ar);
    cout << "---------------------" << endl;
    for(int i = 0; i < size_ar ; i++)
    {
        cout << p[i] << "  ";
    }
    cout << endl;
    cout << "The sum of the perfect numbers in the following array is: " << the_sum << endl;
    return 0;
}

int sum_perfect(int *p, int length)
{
    int i, j, sum, res=0;
    for(i = 0; i < length ; i++)
    {
        for(j = 1, sum = 0; j < p[i] ; j++)
        {
            if((p[i] % j == 0) && (p[i] != 1))
            {
                sum = sum + j;
            }
        }
        if(sum == p[i])
        {
            res = res + sum;
        }
    }
    return res;
}