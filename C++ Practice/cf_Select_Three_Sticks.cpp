#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        long long int a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // min(a[0],a[2]);

        sort(a, a + n);

        long long int mn = 1000000007;

        for (long long int i = 0; i < n - 2; i++)
        {
            mn = min(mn, ((a[i + 1] - a[i]) + (a[i + 2] - a[i + 1])));
        }

            cout<<mn<<endl;

    }
}