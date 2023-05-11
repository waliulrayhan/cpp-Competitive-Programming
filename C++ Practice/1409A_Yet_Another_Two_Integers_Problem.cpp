#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int x = min(a, b);
        int y = max(a, b);

        if (((y - x) % 10) < 10 and ((y - x) % 10) > 0)
        {
            cout << ((y - x) / 10) + 1 << endl;
        }
        else
        {
            cout << ((y - x) / 10) << endl;
        }
    }
}