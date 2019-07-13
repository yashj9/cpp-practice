//WAP, to find prime numbers of an array, do product of all prime numbers and check if it is a armstrong number.

#include<iostream>
using namespace std;

int check_prime(int *, int);
bool is_armstrong(int);
int rep_mul(int,int);

int main(void)
{
    int *p_arr, arr_size;
    bool ans;
    cout << "Enter the size of the array: " << endl;
    cin >> arr_size;
    p_arr = new int[arr_size];
    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i < arr_size ; i++)
    {
        cin >> p_arr[i];
    }
    cout << "-----------The given array is ----------- " << endl;
    for(int i = 0; i < arr_size ; i++)
    {
        cout << p_arr[i] << "  ";
    }
    cout << endl;
    ans = is_armstrong(check_prime(p_arr, arr_size));
    if(ans)
    {
        cout << "The product of all prime numbers in the given array IS an Armstrong Number. " << endl;
    }
    else
    {
        cout << "The product of all prime numbers in the given array IS NOT an Armstrong Number. " << endl;
    }
    return 0;
}

int check_prime(int *p, int count)
{
    int prod = 1 , j;
    cout << "Prime numbers present in the given array is/are: " << endl;
    for(int i = 0; i < count ; i++)
    {
        for(j = 2; j < p[i] ; j++)
        {
            if(p[i] % j == 0)
            {
                break;
            }
        }
        if(p[i] == j)
        {
            cout << j << endl; // we can also use p[i] but it will be slower compared to directly printing j value
            prod = prod * j;
        }
    }
    cout << "and their product is : " << prod << endl;
    return prod;
}

int rep_mul(int value, int count)
{
    while(count)
    {
        value = value * value;
        count--;
    }
    return value;
}

bool is_armstrong(int value)
{
    int sum, rem, temp, count;
    for(temp = value, count = 0 ; temp ; temp /= 10)
    {
        count++;
    }
    for(temp = value , sum = 0; temp ; temp = temp/10)
    {
        rem = temp % 10;
        sum = sum + rep_mul(rem, count);
    }
    if(sum == value)
    {
        return true;
    }
    else
    {
        return false;
    }
}
