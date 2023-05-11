#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;

    cout<<"I hate";

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            continue;
        }
        if(i%2!=0)
        {
            cout<<" that I love";
        }

        else if(i%2==0)
        {
            cout<<" that I hate";
        }
    }

    cout<<" it";

    return 0;
}