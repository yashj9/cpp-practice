//code from hr cpp , related to vector templates, try modifying for array

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int **ptr, i, j, *k, *l, q, n, size;
    cin >> n >> q;
    ptr = new int*[n];
    for(i = 0; i < n ; i++)
    {
        cin >> size;
        ptr[i] = new int[size];
    }
    k = new int[q];
    l = new int[q];
    for(j = 0; j < q ; j++)
    {
        cin >> k[j] >> l[j];
    }
    for(j = 0; j < q ; j++)
    {
        cout << *(*(ptr+k[j])+l[j]) ; 
    }
    return 0;
}

