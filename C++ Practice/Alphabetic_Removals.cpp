#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, temp;
    int n, k;

    cin>>n>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i] == 'a')
        {
            temp=s[i];
            s[i]=s[i+1];
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    
    //cout<<s;
    return 0;
}