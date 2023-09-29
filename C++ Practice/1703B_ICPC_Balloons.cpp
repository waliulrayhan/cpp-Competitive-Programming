#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution()
{
    // Solve Here
    int n;
    cin >> n;

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int cnt=0,notM=0;

    for (size_t i = 0; i < n; i++)
    {
        if (s[i]==s[i+1])
        {
            cnt++;
        }
        else
        {
            notM++;
        }
        
    }
    
    if (cnt==0)
    {
        cout<<n*2<<endl;
    }
    else{
        cout<<(cnt+2)+(2*notM)-2<<endl;
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