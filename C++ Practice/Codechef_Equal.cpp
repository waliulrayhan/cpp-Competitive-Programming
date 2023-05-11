#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int A, B, x, c1 = 0;
        cin >> A >> B >> x;

        if (A == B)
        {
            cout << "YES" << endl;
        }
        else
        {
            long long int a, b;

            a = min(A, B);
            b = max(A, B);
            if (a < b)
            {
                while (1)
                {
                    if (a > b)
                    {
                        c1++;
                        break;
                    }
                    else
                    {
                        if ((a + x) == (b - x))
                        {
                            cout << "YES" << endl;
                            c1 = 0;
                            break;
                        }
                        else
                        {
                            a = a + x;
                            b = b - x;
                        }
                    }
                }
            }

            if (c1 != 0)
            {
                cout << "NO" << endl;
            }

        }
    }
}