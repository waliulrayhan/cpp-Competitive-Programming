#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution()
{
    // Solve Here
    int n;
    cin >> n;

    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (a[0] == 1)
    {
        b[0] = 2;
    }
    else
    {
        b[0] = 1;
    }

    for (size_t i = 1; i < n; i++)
    {
        b[i]=b[i-1]+1;
    }
    

    for (size_t i = 1; i < n; i++)
    {
        if (a[i]==b[i-1]+1)
        {
            b[i]=b[i-1]+2;
        }
        else
        {
            b[i]=b[i-1]+1;
        }   
    }
    
    cout<<b[n-1]<<endl;
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