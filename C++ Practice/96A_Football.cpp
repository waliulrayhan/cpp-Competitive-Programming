#include<iostream>
using namespace std;
int main()
{
    string s;
    int count=0;

    cin>>s;

    int l=s.length();

    for(int i=0;i<l;i++)
    {
        if((s[i]==s[i+1]) && (s[i+1]==s[i+2]) && (s[i+2]==s[i+3]) && (s[i+3]==s[i+4]) && (s[i+4]==s[i+5]) && (s[i+5]==s[i+6]))
        {
            count++;
            break;
        }
    }

    if(count!=0)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}