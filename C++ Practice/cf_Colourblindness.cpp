#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n, count=0;
        cin>>n;

        string s1, s2;
        cin>>s1>>s2;

        for (size_t i = 0; i < n; i++)
        {
            if (s1[i]=='B')
            {
                s1[i]='G';
            }

            if (s2[i]=='B')
            {
                s2[i]='G';
            }

        }
        
        for (size_t i = 0; i < n; i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
            }
        }
        

        if (count==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
}