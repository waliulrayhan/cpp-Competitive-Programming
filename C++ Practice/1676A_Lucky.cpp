#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution()
{
    // Solve Here
    string s;
    cin >> s;

    int sum1 = 0;
    sum1 = int(s[0]) + int(s[1]) + int(s[2]);

    // cout << sum1 - 144 << endl;

    int sum2 = 0;
    sum2 = int(s[3]) + int(s[4]) + int(s[5]);

    // cout << sum2 - 144 << endl;

    if ((sum1 - 144) == (sum2 - 144))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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