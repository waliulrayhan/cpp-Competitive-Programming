#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution()
{
    // Solve Here
    int n;
    cin >> n;

    bool ans = 1;
    int x[n],y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (x[i] >= x[0] && y[i] >= y[0])
        {
            ans = 0;
        }
    }
    if (ans)
        cout << x[0] << endl;
    else
        cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}