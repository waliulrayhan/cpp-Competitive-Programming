#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution()
{
    // Solve Here
    int n;
    cin >> n;

    int start = n;

    for (size_t i = start; i < n + start; i++)
    {
        if ((3 * (i + 2)) % (i + (i + 1)) != 0)
        {
            // cout << i << endl;
            // i--;
            // continue;
            cout << i << " ";
        }
        else
        {
            // cout<<i<<endl;
            // continue;
            // i=i-2;
            n++;
        }
    }
    cout << endl;
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