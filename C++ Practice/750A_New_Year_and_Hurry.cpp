#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, k, sum = 5, x = 240, count = 0;

    cin >> n >> k;

    /*while (1)
    {
        if ((k+sum) < 240)
        {
            count++;
            k = k + sum;
            sum = sum + 5;
        }
        else
        {
            break;
        }
    }*/


    for (int i = 0; i < n; i++)
    {
        if ((k+sum) <= 240)
        {
            count++;
            k = k + sum;
            sum = sum + 5;
        }
        else
        {
            break;
        }
    }
    

    cout << count;
}