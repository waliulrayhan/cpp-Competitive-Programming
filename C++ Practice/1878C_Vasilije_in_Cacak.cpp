#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution()
{
    // Solve Here
    long long int n, k, x, sum1 = 0, sum2 = 0, i;
    cin >> n >> k >> x;

    long long int mi = k * (k + 1) / 2;
    long long int a = n - k;
    long long int mx = (n * (n + 1) / 2) - (a * (a + 1) / 2);

    if (mi <= x and mx >= x)
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