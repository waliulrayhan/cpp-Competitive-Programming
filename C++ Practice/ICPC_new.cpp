#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(int cs)
{
    long long int n,sum=0,sum1=0,k;
    cin>>n>>k;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for (long long int i = 0; i < n-1; i++)
    {
        if(a[i]<a[i+1]) sum1+=(a[i+1]-a[i]);
    }
    sum1*=(k-1);
    cout<<"Case "<<cs<<": "<<sum+sum1<<endl;
}
int main()
{
    long long t=1,c=1;
    cin >> t;

    while (t--)
    {
        solve(c);
        c++;
    }
}