#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int a[n], b[n], sumA = 0, sumB = 0;

        for (size_t i = 0; i < n - 1; i++)
        {

            cin >> a[i] >> b[i];

            sumA = sumA + a[i];
            sumB = sumB + b[i];
        }

        cout << "Case "<<t<<": "<<sumA-sumB;
    }
}