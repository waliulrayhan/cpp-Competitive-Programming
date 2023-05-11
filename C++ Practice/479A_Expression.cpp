#include<iostream>
using namespace std;
int main()
{
    int a, b, c, r[5];

    cin>>a>>b>>c;

    r[0]=a+(b*c);
    r[1]=a*(b+c);
    r[2]=a*b*c;
    r[3]=(a+b)*c;
    r[4]=a+b+c;

    for(int i=1;i<=5;++i)
    {
        if(r[0]<r[i])
        {
            r[0]=r[i];
        }
    }

    cout<<r[0];

    return 0;
}