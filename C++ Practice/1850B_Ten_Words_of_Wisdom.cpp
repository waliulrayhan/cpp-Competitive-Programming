#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n];

        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }

        for (size_t i = 0; i < n; i++)
        {
            if (a[i] > 10)
            {
                b[i] = -1;
            }
        }

        int *max = b; // larger element pointer initially pointed to first element
        for (int i = 1; i < n; i++)
        {
            if (b[i] > *max)
            {
                max = &b[i]; // updating the pointer to maximum
            }
        }
        int index = max - b; // pointer arithmetic to obtain the index
        cout << index+1 << "\n";
    }
}