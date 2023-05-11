#include<iostream>
using namespace std;
int main()
{
    int a, b, n;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;

        int rem=a/b;

        if(a%b==0)
        {
            cout<<"0"<<endl;
        }

        else
        {
            int x=b*(rem+1);
            cout<<x-a<<endl;
        }
    }

    return 0;
}