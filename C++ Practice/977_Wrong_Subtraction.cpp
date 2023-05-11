#include<iostream>
using namespace std;
int main()
{
    int n;
    int k, x;

    cin>>n>>k;

    for(int i=1;i<=k;i++)
    {
        if(n%10!=0)
        {
            n=n-1;
        }

        else if(n%10==0)
        {
            n=n/10;
        }
    }

    cout<<n;

    return 0;
}