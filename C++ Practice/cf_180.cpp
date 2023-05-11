#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (int i = s.length(); i >= 0; i--)
    {
        if (s[i] == '0')
        {
            cout << '0';
        }

        if (s[i] == '1')
        {
            cout << "1";
        }

        if (s[i] == '6')
        {
            cout << "9";
        }

        if (s[i] == '8')
        {
            cout << "8";
        }

        if (s[i] == '9')
        {
            cout << "6";
        }
    }
}