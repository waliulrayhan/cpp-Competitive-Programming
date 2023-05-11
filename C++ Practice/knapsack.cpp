#include<bits/stdc++.h>
using namespace std;
#define  ll long long


void solve()
{
	ll n,W;
	cout<<"Enter items number: ";
	cin>>n;
	cout<<"Enter Knapsack capacity: ";
	cin>>W;
	ll w[n+1];
	ll v[n+1];
	ll dp[n+1][W+1];
	cout<<"Enter the weight of items: "<<endl;
	for (int i = 0; i <n; ++i)
	{
		cin>>w[i];
	}
	cout<<"Enter the value(profits) of items: "<<endl;
	for (int i = 0; i <n; ++i)
	{
		cin>>v[i];
	}
	//putting 0 in 1st row
	for (int i = 0; i <=W; ++i)
	{
		dp[0][i]=0;
	}
	//putting 0 in 1st column
	for (int i = 0; i <=n; ++i)
	{
		dp[i][0]=0;
	}

	for (int i = 1; i <=n; ++i)
	{
		for (int j = 1; j <=W; ++j)
		{
			if(j>=w[i-1]) dp[i][j]=max(dp[i-1][j],v[i-1]+dp[i-1][j-w[i-1]]);
			else dp[i][j]=dp[i-1][j];
		}
	}
	cout<<"Maximum profit: "<<dp[n][W]<<endl;
	ll x=dp[n][W];
	ll i=n,j=W;
	cout<<"values: ";
	while(i>0)
	{
		if(dp[i][j]==dp[i-1][j]) i--;
		else
		{

			cout<<v[i-1]<<" ";
			x-=v[i-1];
			i--;
			if(i==0) break;
			for (int k = 0; k <=W; ++k)
			{
				if(dp[i][k]==x) j=k;
			}
		}
	}
}
int main()
{
	//sv();
	ll t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
}