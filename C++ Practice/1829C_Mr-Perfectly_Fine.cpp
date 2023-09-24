#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution()
{
    // Solve Here
    int n;
    cin >> n;

    int m[n];
    string s[n];
    int min01 = -1, min10 = -1, min11 = -1, cnt01 = 0, cnt10 = 0, cnt11 = 0;

    for (size_t i = 0; i < n; i++)
    {
        cin >> m[i] >> s[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if (s[i] == "01" and cnt01 == 0)
        {
            min01 = m[i];
            cnt01++;
        }
        else if (s[i] == "10" and cnt10 == 0)
        {
            min10 = m[i];
            cnt10++;
        }
        else if (s[i] == "11" and cnt11 == 0)
        {
            min11 = m[i];
            cnt11++;
        }
        else
        {
            continue;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        if (s[i] == "01")
        {
            if (m[i] < min01)
            {
                min01 = m[i];
            }
        }
        else if (s[i] == "10")
        {
            if (m[i] < min10)
            {
                min10 = m[i];
            }
        }
        else if (s[i] == "11")
        {
            if (m[i] < min11)
            {
                min11 = m[i];
            }
        }
        else
        {
            continue;
        }
    }

    if (cnt01 == 1 and cnt10 == 1)
    {
        if (cnt11 == 0)
        {
            cout << (min01 + min10) << endl;
        }
        else
        {
            cout << min((min01 + min10), min11) << endl;
        }
    }
    else if (cnt01 == 0 or cnt10 == 0)
    {
        if (cnt11 == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << min11 << endl;
        }
    }
    // else{
    //     cout<<-1<<endl;
    // }

    // cout << min01 << "  " << min10 << "  " << min11 << endl;
    // cout << cnt01 << "  " << cnt10 << "  " << cnt11 << endl;
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