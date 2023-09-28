#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	//Solve Here
    string s="codeforces";

    char c;
    cin>>c;

    int cnt=0;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i]==c)
        {
            cnt++;
            // cout<<"YES"<<endl;
            break;
        }
        
    }
    
    if (cnt!=0)
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