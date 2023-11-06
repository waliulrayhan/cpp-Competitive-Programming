#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	//Solve Here
    int a[4];

    for (size_t i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    
    int cnt=0;

    for (size_t i = 0; i < 4; i++)
    {
        if (a[0]<a[i])
        {
            cnt++;
        }
        
    }
    
    cout<<cnt<<endl;
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