#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, result;
    int c1=0, c2=0;

    cin>>s;

    int l=s.length();

    for(int i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            c1++;
        }

        if(s[i]>='A' && s[i]<='Z')
        {
            c2++;
        }
    }
    
    if(c1>c2 || c1==c2)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }

    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;
    }

    return 0;
}