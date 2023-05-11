#include<iostream>
using namespace std;
int main()
{
    int n,i;

    cout<<"Enter the value of N: ";
    cin>>n;

    for(i=0;i<=n;i=i+2)
    {
        if(i%2==0)
        {
            cout<<i<<"   "<<i+1<<endl;
        }
    }

    cout<<endl;

    return 0;
}