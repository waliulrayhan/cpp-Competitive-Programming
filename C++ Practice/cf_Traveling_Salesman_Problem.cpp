#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n, sum=0;
        cin>>n;

        while (n--)
        {
            int x,y;
            cin>>x>>y;

            if(x<0)
            {
                x=x*(-1);
            }
            if (y<0)
            {
                y=y*(-1);
            }

            sum= sum+(x+y);
            
        }
        
        cout<<sum*2<<endl;
    }
    
}