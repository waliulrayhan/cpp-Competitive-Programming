#include<iostream>
using namespace std;
int main()
{
    string n;
    int count=0;

    cin>>n;

    int l=n.length();


    for(int i=0;i<l;i++)
    {
        if((n[i]=='4') || (n[i]=='7'))
        {
            count++;
        }
    }

    if(count==4 || count==7 || count==47 || count==744)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}