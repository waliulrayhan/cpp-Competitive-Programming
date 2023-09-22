// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<int> a(n);
//         for (int i = 0; i < n; ++i)
//             cin >> a[i];
//         a.begin(), a.end();
//         int cnt = 1, ans = 1;
//         for (int i = 1; i < n; ++i)
//         {
//             if (a[i] - a[i - 1] > k)
//             {
//                 cnt = 1;
//             }
//             else
//             {
//                 ++cnt;
//             }
//             ans = max(ans, cnt);
//         }
//         cout << n - ans << '\n';
//     }
// }

#include "bits/stdc++.h"
using namespace std;

#define ll long long

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define pb push_back
#define sz(a) (int)a.size()

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(all(a));
    int cnt = 1, ans = 1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] - a[i - 1] > k)
        {
            cnt = 1;
        }
        else
        {
            ++cnt;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}