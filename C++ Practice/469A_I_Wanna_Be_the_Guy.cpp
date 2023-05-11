#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m,n1,n2,a[101]={0},b,i;
    cin>>m;

    cin>>n1;
    for(i=1;i<=n1;i++)
    {
        cin>>b;
        a[b]++;
    }

    cin>>n2;
    for(i=1;i<=n2;i++)
    {
        cin>>b;
        a[b]++;
    }

    for(i=1;i<=m;i++)
    {
        if(a[i]==0)
        {
            cout<<"Oh, my keyboard!"<<'\n';
            return 0;
        }
    }

    cout<<"I become the guy."<<'\n';
    
    return 0;
}