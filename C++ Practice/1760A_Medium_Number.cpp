#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solution() {
	//Solve Here
    int a[3];

    for (size_t i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);

    cout<<a[1]<<endl;
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