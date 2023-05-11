#include<iostream>
using namespace std;
int main()
{
    string s;
    int count=0;

    cin>>s;

    int l=s.size();

    for(int i=0;i<l;i++)
    {
        //int x=s[i];

        if(s[i]=='H' or s[i]=='9' or s[i]=='Q' /*or s[i]=='+'*/)
        {
            count++;
        }
    }

    if(count>=1)
    cout<<"YES"<<endl;

    else
    cout<<"NO"<<endl;

    return 0;
}