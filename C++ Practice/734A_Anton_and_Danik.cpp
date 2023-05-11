#include<iostream>
using namespace std;
int main()
{
    int n, countA=0, countD=0;
    string s;

    cin>>n>>s;

    int l=s.length();

    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            countA++;
        }

        else
        {
            countD++;
        }
    }

    if(countA==countD)
    {
        cout<<"Friendship";
    }

    else if(countA>countD)
    {
        cout<<"Anton";
    }

    else if(countD>countA)
    {
        cout<<"Danik";
    }

    return 0;
}