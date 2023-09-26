#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	//Solve Here
    int n,k,cnt=0;
    cin>>n>>k;

    int a[n];

    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];

        if (a[i]==k)
        {
            cnt++;
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