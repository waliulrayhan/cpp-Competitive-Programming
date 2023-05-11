#include<iostream>
using namespace std;
int main()
{
    int n, m, r, x;

    cin>>n>>m;

    r=min(n,m);

    while(r>0)
    {
        x=(n+m)-2*r;

        if(x>=r)
        {
            break;
        }
        r--;
    }

    cout<<r;

    return 0;
}
