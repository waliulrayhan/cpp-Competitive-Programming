#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	//Solve Here
    int n, sumOdd=0,sumEven=0;
    cin>>n;

    int a[n];

    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i]%2==0)
        {
            sumEven=sumEven+a[i];
        }
        else
        {
            sumOdd=sumOdd+a[i];
        }
    }
    
    if (sumEven>sumOdd)
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