#include<iostream>
using namespace std;
int main()
{
    long long int n, x;

    cin>>n;

    if(n<=2)
    {
        cout<<n;
        return 0;
    }

    if(n%2!=0)
    {
        x=n*(n-1)*(n-2);
        cout<<x;
        return 0;
    }
    
    if(n%3==0)
    {
        x=(n-1)*(n-2)*(n-3);
        cout<<x;
        return 0;
    }

    else
    {
        x=n*(n-1)*(n-3);
        cout<<x;
        return 0;
    }

    return 0;
}