#include<iostream>
using namespace std;
int main()
{
    int t, k[1000], i, j, find;

    cin>>t;

    while(t--)
    {
        cin>>find;
        //for(i=1,j=1;i<=1000,j<=1000;i++,j++)
        {
            if(i%3==0 || i%10==3)
            {
                j=j-1;
            }

            else
            {
                k[j]=i;

            }
        }

        for(int j=1;j<2;j++)
        {
            cout<<k[find]<<endl;
            break;
        }
    }

    return 0;
}