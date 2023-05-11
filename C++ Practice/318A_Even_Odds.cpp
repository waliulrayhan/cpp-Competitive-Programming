#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, r, mid, x;

    cin>>n>>k;

    if(n%2==0)
    {
        if((n/2)<k)
        {
            k=k-(n/2);
            cout<<(2*k);
        }

        else if((n/2)>k)
        {
            cout<<((2*k)-1);
        }

        else
        {
            cout<<((2*k)-1);
        }
    }

    else
    {
        if(((n+1)/2)<k)
        {
            k=k-((n+1)/2);
            cout<<(2*k);
        }

        else if(((n+1)/2)>k)
        {
            cout<<((2*k)-1);
        }

        else
        {
            cout<<((2*k)-1);
        }
    }

    return 0;
}