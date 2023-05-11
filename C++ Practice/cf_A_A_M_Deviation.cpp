#include<iostream>
#include<bits/stdc++.h>

//long int a[3];
using namespace std;
int main()
{
    int t, i, a[3];

    cin>>t;

    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        long long int sum=x+y+z;
        int ans=0;
        if(sum%3==0)
            ans=0;
        else
            ans=1;
        cout<<ans<<endl;

    }
    return 0;
}