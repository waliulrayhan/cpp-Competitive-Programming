#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*int t;
    cin >> t;

    while (t--)
    {
        int n, r, b, x, z;
        cin >> n >> r >> b;

        if (r = (2 * b))
        {
            char s[n];
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    s[i] = 'R';
                }
                else
                {
                    s[i] = 'B';
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << s[i];
            }

            cout << endl;
        }

        else if ((r / 2) <= b)
        {

            char s[n];

            // int x = b + 1;
            z = b;
            int div = r / z;

            for (int i = 0; i < n; i++)
            {

                if (div != 0)
                {
                    if (b == 0)
                    {
                        s[i] = 'R';
                    }
                    else
                    {
                        s[i] = 'R';
                        div--;
                        // r--;
                    }
                }
                else
                {
                    s[i] = 'B';
                    div = r / z;
                    b--;
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << s[i];
            }

            cout << endl;
        }

        else
        {
            // int n, r, b;
            // cin >> n >> r >> b;

            char s[n];

            x = b + 1;
            int div = n / x;

            for (int i = 0; i < n; i++)
            {
                if (div != 0)
                {

                    s[i] = 'R';
                    div--;
                }
                else
                {
                    s[i] = 'B';
                    div = n / x;
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << s[i];
            }

            cout << endl;
        }
    }*/

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int p = r / (b + 1), q = r % (b + 1);
        for (int i = 0; i < q; i++)
            cout << string(p + 1, 'R') << 'B';
        for (int i = q; i < b; i++)
            cout << string(p, 'R') << 'B';
        cout << string(p, 'R');
        cout << endl;
    }
    return 0;
}