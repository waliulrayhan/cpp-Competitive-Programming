#include<iostream>
using namespace std;
int main()
{
    int t, l[100000], r[100000], a[100000], b[100000];

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>l[i]>>r[i];

    }

    for(int i=0;i<t;i++)
    {
        a[i]=r[i];

        if(l[i]>r[i]/2)
        {
            cout<<r[i]%l[i]<<endl;
        }

        else
        {
            b[i]=(r[i]/2)+1;

            cout<<a[i]%b[i]<<endl;
        }
    }

    return 0;
}