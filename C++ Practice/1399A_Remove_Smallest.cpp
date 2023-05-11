#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        int a[n], count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i + 1] - a[i]) <= 1)
            {
                continue;
            }

            else
            {
                count++;
            }
        }

        if (count == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}