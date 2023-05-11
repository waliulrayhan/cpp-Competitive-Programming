#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n, maxi, mini, count=0;
    
    cin>>n;

    int a[n];

    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
        maxi = a[0];
        mini = a[0];
    }

    for (int  i = 0; i < n; i++)
    {
        if(a[i]>maxi)
        {
            maxi = a[i];
            count++;
        }
        if(a[i]<mini)
        {
            mini = a[i];
            count++;
        }
    }

    cout<<count;
    
}