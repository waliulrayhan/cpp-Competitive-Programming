#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, row, col, i;
    // cin >> t;

    // while (t--)
    // {
        string s[10];
        for (i = 1; i <= 10; i++)
        {
            cin >> s[i];
        }

        for (row = 1; row <= 5; row++)
        {
            string x = s[row];
            for (row = 1; row <= 5; row++)
            {
                // if (x[row] != '.')
                // {
                //     cout << x[row];
                // }

                if (x[row]!='.')
                {
                    cout<<row<<" ";
                }
                
            }
        }
        
    // }
}