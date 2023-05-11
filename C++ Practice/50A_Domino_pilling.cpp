#include<iostream>
using namespace std;
int main()
{
    int m, n, x, y;

    cin>>m>>n;

    if((m>=1&&m<=16) && (n>=m&&n<=16))
    {
        x=m*n;

        y=x/2;
    }

    cout<<y;

    return 0;
}