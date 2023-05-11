#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c1=0, c2=0, c3=0, c4=0, taxi=0;
    cin>>n;

    int s[n];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];

        if(s[i]==1)
        {
            c1++;
        }

        if(s[i]==2)
        {
            c2++;
        }

        if(s[i]==3)
        {
            c3++;
        }

        if(s[i]==4)
        {
            c4++;
        }
    }

    taxi=c4;

    while(c1!=0 and c3!=0)
    {
        c3-=1;
        c1-=1;
        taxi+=1;
    }

    if(c1==0 and c3!=0)
    {
        taxi+=c3;
        c3=0;
    }

    taxi+=c2/2;

    if(c2%2!=0)
    {
        if(c1<=2)
        {
            taxi+=1;
            c2=0;
            c1=0;
        }
        else
        {
            c1-=2;
            taxi+=1;
            c2=0;
        }
    }

    if(c1!=0)
    {
        taxi+=c1/4;
        if(c1%4!=0)
        {
            taxi+=1;
        }
    }

    cout<<taxi;

    return 0;
}