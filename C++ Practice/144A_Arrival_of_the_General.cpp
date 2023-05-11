/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, temp, min_move, max_move;

    cin>>n;

    int a[n];

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    int min=a[1];
    int max=a[1];

    for(i=1;i<=n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    for(i=1;i<=n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]==max)
        {
            max_move=i;
        }
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]==min)
        {
            min_move=i;
        }
    }

    if(max_move<min_move)
    {
        cout<<max_move-1+n-min_move;
    }

    else
    {
        cout<<max_move-1+n-min_move-1;
    }

    cout<<min_move<<" "<<max_move;

    return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
    int t, max=0, min=0;
    int a[102];

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]>a[max]) max=i;
        if(a[i]<=a[min]) min=i;
    }

    if(max<min)
    {
        cout<<max-1+t-min;
    }

    else
    {
        cout<<max-1+t-min-1;
    }

    return 0;
}