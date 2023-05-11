#include<iostream>
using namespace std;
int main()
{
    int n, x, y, z, sx[100], sy[100], sz[100], rx=0, ry=0, rz=0, c=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        rx=rx+x;
        ry=ry+y;
        rz=rz+z;
    }

    /*for(int i=0;i<n;i++)
    {
        rx=rx+sx[i];
        ry=ry+sy[i];
        rz=rz+sz[i];
    }*/

    if(rx==0 && ry==0 && rz==0)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    //cout<<rx<<ry<<rz;

    return 0;
}