#include<iostream>
using namespace std;
int main()
{
    int n, r, count=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>r;

        if(r==1)
        {
            count++;
        }
    }

    if(count==0)
    {
        cout<<"EASY";
    }

    else
    {
        cout<<"HARD";
    }

    return 0;
}