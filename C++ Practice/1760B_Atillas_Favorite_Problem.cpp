#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	// Solve Here
    int n;
    cin>>n;

    string s;
    cin>>s;

    int sz[n];
    for (size_t i = 0; i < s.length(); i++)
    {
        sz[i]=int(s[i]);
    }
    
    // for (size_t i = 0; i < s.length(); i++)
    // {
    //     cout<<sz[i]<<" ";
    // }

    int mx=*max_element(sz, sz + n);
    
    cout<<mx-96<<endl;
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