#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution()
{
    // Solve Here
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            res++;
            i += k - 1;
        }
    }
    cout << res << endl;
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