#include<iostream>
using namespace std;
int main()
{
    long long int x, y, z, a, b, i, sum;

    cin>>x>>y>>z;

    a=x%z;
    b=y%z;

    sum=(x+y)/z;

    if(a==0 || b==0 || a+b<z)
    {
        cout<<sum<<" "<<"0";
    }

    else
    {
        if(z-a<z-b)
        {
            cout<<sum<<" "<<z-a;
        }
        
        else
        {
            cout<<sum<<" "<<z-b;
        }
    }

    return 0;
}