#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;

    if(n>=1 && n<=125)
    {
        cout<<"4";
    }

     if(n>=126 && n<=211)
    {
        cout<<"6";
    }

     if(n>=212 && n<=214)
    {
        cout<<"8";
    }

    return 0;
}