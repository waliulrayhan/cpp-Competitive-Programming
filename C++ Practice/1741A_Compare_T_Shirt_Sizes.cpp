#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string a, b;
        cin>>a>>b;

        int s=1, m=2, l=3, res1=0, res2=0;

        for (size_t i = 0; i < a.length(); i++)
        {
            if (a[i]=='S')
            {
                res1=0-a.length();
            }

            if (a[i]=='M')
            {
                res1=(a.length()-1)+2;
            }
            
            if (a[i]=='L')
            {
                res1=(a.length()-1)+3;
            }
            
        }

        for (size_t i = 0; i < b.length(); i++)
        {
            if (b[i]=='S')
            {
                res2=0-b.length();
            }

            if (b[i]=='M')
            {
                res2=(b.length()-1)+2;
            }
            
            if (b[i]=='L')
            {
                res2=(b.length()-1)+3;
            }
            
        }

        if (res1<res2)
        {
            cout<<"<"<<endl;
        }
        else if (res1>res2)
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
        
    }

}