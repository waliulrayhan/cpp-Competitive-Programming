#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	//Solve Here
    int n;
    cin>>n;

    int a[n];

    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);

    int ans=0;

    for (size_t i = 0; i < n; i++)
    {
        if (a[i]==a[i+1])
        {
            ans++;
        }
    }
    
    if (ans!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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