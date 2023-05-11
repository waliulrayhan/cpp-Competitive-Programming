#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, r;

    cin>>s1>>s2;

    int l=s1.length();

    for(int i=0;i<l;i++)
    {
        if((s1[i]=='0') && (s2[i]=='0'))
        {
            s2[i]='0';
        }

        else if((s1[i]=='1') && (s2[i]=='1'))
        {
            s2[i]='0';
        }

        else
        {
            s2[i]='1';
        }
    }

    for(int i=0;i<l;i++)
    {
        cout<<s2[i];
    }

    return 0;
}