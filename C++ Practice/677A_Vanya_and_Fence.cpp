#include<iostream>
using namespace std;
int main()
{
    int n, h, f, count1=0, count2=0;

    cin>>n>>h;

    for(int i=0;i<n;i++)
    {
        cin>>f;

        if(h<f)
        {
            count1=count1+2;
        }

        else
        {
            count2++;
        }
    }

    cout<<count1+count2;

    return 0;
}