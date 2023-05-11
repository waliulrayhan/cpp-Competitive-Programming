#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[1000], b[1000], sum[1000], temp;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];

        a[i+1]=sum[i]-a[i+1];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sum[j]>sum[i])
            {
                temp=sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }


    cout<<sum[0];

    return 0;
}