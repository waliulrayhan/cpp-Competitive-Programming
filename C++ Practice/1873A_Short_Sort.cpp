#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution()
{
    // Solve Here
    int count = 0;
    char a, b, c;
    for (size_t i = 0; i < 1; i++)
    {
        cin >> a >> b >> c;
    }

    if (a != 'a')
    {
        count++;
    }
    if (b != 'b')
    {
        count++;
    }
    if (c != 'c')
    {
        count++;
    }

    if (count <= 2)
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