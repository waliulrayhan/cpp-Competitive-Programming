#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	//Solve Here
    int x=0,y=0;

    int n;
    cin>>n;

    string s;
    cin>>s;

    int ans=0;

    for (size_t i = 0; i <= n; i++)
    {
        if (x==1 and y==1)
        {
            ans++;
        }
        if (s[i]=='U')
        {
            y++;
        }
        if (s[i]=='D')
        {
            y--;
        }
        if (s[i]=='L')
        {
            x--;
        }
        if (s[i]=='R')
        {
            x++;
        }
        
    }
    
    if (ans!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}