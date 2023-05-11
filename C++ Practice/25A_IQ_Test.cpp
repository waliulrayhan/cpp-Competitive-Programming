#include<iostream>
using namespace std;
int main()
{
    int n, a[100], i, c2=0, c1=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if((a[i]%2==0))
        {
            c2++;
        }

        else if((a[i]%2!=0))
        {
            c1++;
        }
    }

    if(c2>c1)
    {
        for(i=0;i<n;i++)
        {
            if((a[i]%2!=0))
            {
                cout<<i+1;
                break;
            }
        }
    }

    else
    {
        for(i=0;i<n;i++)
        {
            if((a[i]%2==0))
            {
                cout<<i+1;
                break;
            }
        }
    }

    return 0;
}