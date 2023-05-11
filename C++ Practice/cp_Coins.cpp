#include<iostream>
using namespace std;
int main()
{
    int n, x;

    cin>>n;

    for(int i=n;i>=1;i--)
    {
        if(n%i==0)
        {
            n=i;
            cout<<i<<" ";
            /*for(int j=i;i>=i;j--)
            {
                if(i%j==0)
                {
                    cout<<j<<" ";
                }
            }*/
            
        }
    }

    return 0;
}