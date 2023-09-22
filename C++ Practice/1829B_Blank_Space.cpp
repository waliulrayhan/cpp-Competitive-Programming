#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                cnt++;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        cout << max(ans, cnt) << endl;
    }
}