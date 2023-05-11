#include<iostream>
using namespace std;
int main()
{
    string s;
    int q=0;
    cin>>s;

    char a=s[0];

    char x=toupper(a);

    cout<<x;
    for(int i=q+1;i<s.length();i++)
    {
        cout<<s[i];
    }

    return 0;
}