#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d, c=0;

    cin>>k>>l>>m>>n>>d;

    int x[d];

    for(int i=1;i<=d;i++)
    {
        x[i]=i;
    }

    for(int i=1;i<=d;i++)
    {
        if(i%k==0)
        {
            x[i]=0;
        }
    }

    for(int i=1;i<=d;i++)
    {
        if(i%l==0)
        {
            x[i]=0;
        }
    }

    for(int i=1;i<=d;i++)
    {
        if(i%m==0)
        {
            x[i]=0;
        }
    }

    for(int i=1;i<=d;i++)
    {
        if(i%n==0)
        {
            x[i]=0;
        }
    }

    for(int i=1;i<=d;i++)
    {
        if(x[i]!=0)
        {
            c++;
        }
    }

    cout<<d-c;

    return 0;
}