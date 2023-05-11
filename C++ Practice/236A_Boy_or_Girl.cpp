#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, temp;
    int count=0;

    cin>>s;

    sort(s.begin(),s.end());        //Shortest Sorting Algorithm

    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1])
        {
            count++;
        }
    }
    count=count+1;

    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}