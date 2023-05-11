#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0;
    string s[100000];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }

    cout<<count;

    return 0;
}
/*This doesn't work in my VS Code.. So, be careful...
But it is acceptable in CF*/