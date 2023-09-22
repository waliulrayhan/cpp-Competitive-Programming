#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s[8];
        for (size_t i = 0; i < 8; i++)
        {
            cin >> s[i];
        }

        for (size_t i = 0; i < 8; i++)
        {
            string x = s[i];
            for (size_t i = 0; i < 8; i++)
            {
                if (x[i] != '.')
                {
                    cout << x[i];
                }
            }
        }
        cout<<endl;
    }
}