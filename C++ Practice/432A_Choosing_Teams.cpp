#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
        if (5 - a[i] >= k)
            cnt++;

    int ans = cnt / 3;

    cout<<ans<<endl;
}