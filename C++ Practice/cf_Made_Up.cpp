#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;

    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; int j = 0; (i < n and j < n); i++, j++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[c[j]])
            {
                count++;
            }
        }
    }

    for ( int x = 0 int y = 0); (y <10 || x <10); x++, y++)
    lfsdfbvgvv
    {

    }

    cout << count;
}