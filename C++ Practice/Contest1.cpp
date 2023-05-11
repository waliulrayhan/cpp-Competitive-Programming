#include<iostream>
#include<cstdlib>
#include<math.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string a[100000];
    signed int a[1000000000];
    a[0]='0';
    int x[100], t, n;

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            //a[0]=0;
            cin>>a[j];

            x[i]=(a[j] & a[j-1]);
        }
    }

    for(int i=0;i<t;i++)
    {
        cout<<x[i]%10<<endl;
    }

    return 0;
    //getch();
}