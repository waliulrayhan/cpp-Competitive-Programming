#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,s;
    cout<<"Enter number of n: ";
	cin>>n;
	n=n+1;
    cout<<"Enter sum: ";
    cin>>s;
    cout<<"Enter elements: ";
	int arr[n+1];
	arr[0]=0;

	for(int i=1;i<n;i++)
		cin>>arr[i];

	int dp[n+1][s+1];

	for(int i=1;i<=s;i++)
	{
		dp[0][i]=0;
	}
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=1;
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=s;j++)
		{
			if(j<arr[i])
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=(dp[i-1][j]||dp[i-1][j-arr[i]]);
			}
		}
	}
	std::vector<int> v;
	int i=n,j=s;
	if(dp[i][j])
	{
		while(i>0 && j>0)
		{
			if(dp[i-1][j]==1)
			{
				i--;
			}
			else{
				v.push_back(arr[i]);
				j=j-arr[i];
				i--;
	
			}
		}
		reverse(v.begin(),v.end());
		for(auto &x:v)
		{
			cout<<x<<" ";
		}
		cout<<endl;

	}
	else{
		cout<<"Impossible"<<endl;
	}


}