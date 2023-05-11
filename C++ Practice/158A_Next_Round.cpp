#include<iostream>
using namespace std;
int main()
{
    int n, k, count=0, a[100], x;

    cin>>n>>k;

    if((n>=k) && (k&&n>=1) && (k&&n<=50))
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        x=a[k-1];

        for(int i=0;i<n;i++)
        {
            if(a[i]>=x && a[i]>0)
            {count++;}
        }
    }

    cout<<count;

    return 0;
}