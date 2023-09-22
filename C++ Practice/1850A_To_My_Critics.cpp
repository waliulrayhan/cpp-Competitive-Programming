#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a[3], sum = 0;
        for (size_t i = 0; i < 3; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        int min = a[0];
        for (size_t i = 0; i < 3; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
        }

        if ((sum - min) >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        
    }
}