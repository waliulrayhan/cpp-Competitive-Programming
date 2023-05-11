#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello";
    string t;

    cin>>t;

    int a=0, count=0;

    int l=t.length();

    for(int i=0;i<l;i++)
    {
        if(t[i]==s[a])
        {
            a++;
            count++;
        }
    }
        if(count==5)
        {
            cout<<"YES";
        }

        else
        {
            cout<<"NO";
        }

    return 0;
}