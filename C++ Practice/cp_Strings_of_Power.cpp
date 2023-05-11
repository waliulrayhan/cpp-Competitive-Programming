#include<iostream>
using namespace std;
int main()
{
    string s;
    long long int heavy=0, metal=0, ans=0;

    cin>>s;

    int l=s.length();

    for(int i=0;i<l;i++)
    {
        if((s[i]=='h') && (s[i+1]=='e') && (s[i+2]=='a') && (s[i+3]=='v') && (s[i+4]=='y') && i+4<l)
        {
            heavy++;
        }

        if((s[i]=='m') && (s[i+1]=='e') && (s[i+2]=='t') && (s[i+3]=='a') && (s[i+4]=='l') && i+4<l)
        {
            metal++;
        }

        if(metal>0)
        {
            ans=ans+heavy;
            metal=0;
        }
    }

    cout<<ans;

    return 0;
}