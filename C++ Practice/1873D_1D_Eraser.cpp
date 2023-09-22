#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,k, count=0, Bposition;
        cin>>n>>k;

        string s;
        cin>>s;

        for (int i = 1; i <= n; i++)
        {
            if (s[i]=='B')
            {
                Bposition=i;
            }
            
        }

        cout<<(n-Bposition)/k<<endl;
        
    }
}