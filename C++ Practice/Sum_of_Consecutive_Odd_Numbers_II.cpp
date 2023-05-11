#include<iostream>
using namespace std;
int main()
{
    int n, x, y, sum=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
    }
        if(x<y)
        {
            if(x%2==0 && y%2==0)
            {
                for(int i=x+1;i<y;i=i+2)
                {
                    sum=sum+i;
                    cout<<sum<<endl;
                }
            }   

            else if(x%2==0 && y%2!=0)
            {
                for(int i=x+1;i<y;i=i+2)
                {
                    sum=sum+i;
                    cout<<sum<<endl;
                }
            }

            else if(x%2!=0 && y%2==0)
            {
                for(int i=x+2;i<y;i=i+2)
                {
                    sum=sum+i;
                    cout<<sum<<endl;
                }
            }

            else if(x%2!=0 && y%2!=0)
            {
                for(int i=x+2;i<y;i=i+2)
                {
                    sum=sum+i;
                    cout<<sum<<endl;
                }
            }
        }

        else
        {
            x=y;
            y=x;

            if(x%2==0 && y%2==0)
            {
                for(int i=x+1;i<y;i=i+2)
                {
                    sum=sum+i;
                    cout<<sum<<endl;
                }
            }

            else if(x%2==0 && y%2!=0)
            {
                for(int i=x+1;i<y;i=i+2)
                {
                    sum=sum+i;
                    cout<<sum<<endl;
                }
            }

            else if(x%2!=0 && y%2==0)
            {
                for(int i=x+2;i<y;i=i+2)
                {
                    sum=sum+i;
                    cout<<sum<<endl;
                }
            }

            else if(x%2!=0 && y%2!=0)
            {
                for(int i=x+2;i<y;i=i+2)
                {
                    sum=sum+i;
                    cout<<sum<<endl;
                }
            }
        }

    return 0;
}