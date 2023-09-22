#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count=0;
        char a,b,c;
        for (size_t i = 0; i < 1; i++)
        {
            cin>>a>>b>>c;
        }

        if (a!='a')
        {
            count++;
        }
        if (b!='b')
        {
            count++;
        }
        if (c!='c')
        {
            count++;
        }
        
        if (count<=2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
        
    }
}