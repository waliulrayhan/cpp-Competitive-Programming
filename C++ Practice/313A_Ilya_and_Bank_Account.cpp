#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

long long int removeFirst(int n)
{
    long long int tmp(0);
    for (long long int i(0);; ++i)
    {
        long long int m = n % 10;
        n /= 10;
        if (n != 0)
        {
            tmp += std::pow(10, i) * m;
        }
        else
        {
            break;
        }
    }
    return tmp;
}

void solution() {
	//Solve Here
    long long int n;
    cin>>n;

    if (n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        if (n%10==0)
        {
            cout<<removeFirst(abs(n))<<endl;
        }
        else
        {
            cout<<n/10<<endl;
        }
        
    }
    
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
    // cin >> t;
    while (t--)
    {
        solution();
    }
}