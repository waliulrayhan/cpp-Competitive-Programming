#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int l = s.length();

        if (l == 1)
        {
            cout << "NO" << endl;
        }

        int a = 0, b = 0, a_no = 0, b_no = 0;

        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'a')
            {
                a_no++;
            }

            if (s[i] == 'b')
            {
                b_no++;
            }
        }

        for (int i = 0; i < l - 1; i++)
        {
            if ((s[i + 1] == 'a') and (s[i] == 'a'))
            {
                a++;
                if (a >= 1)
                {
                    break;
                }
                // cout << a << endl;
            }

            if ((s[i + 1]) != (s[i]))
            {
                // a = 0;
                // b = 0;
                continue;
            }
        }

        for (int i = 0; i < l - 1; i++)
        {
            if ((s[i + 1] == 'b') and (s[i] == 'b'))
            {
                b++;
                if (b >= 1)
                {
                    break;
                }
                // cout << b << endl;
            }
            if ((s[i + 1]) != (s[i]))
            {
                // a = 0;
                // b = 0;
                continue;
            }
        }

        // cout << a << endl;
        // cout << b << endl;

        if (a_no == l or b_no == l)
        {
            // cout<<"NO"<<endl;
            if (a >= 1)
            {
                cout << "YES" << endl;
            }
            if (b >= 1)
            {
                cout << "YES" << endl;
            }
        }

        else if (a >= 1 and b >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}