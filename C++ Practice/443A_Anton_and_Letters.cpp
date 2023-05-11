#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    int count=0, i , j;

    getline(cin,s);
    
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    s.erase(remove(s.begin(), s.end(), '{'), s.end());
    s.erase(remove(s.begin(), s.end(), '}'), s.end());
    s.erase(remove(s.begin(), s.end(), ','), s.end());

    int l=s.length();

    for (i = 0; i < l; i++)
    {
        for (j = i + 1; j < l; j++)
        {
            //if (s[i] == s[j])
            //{
                if (s[i]==s[j])
                {
                    count++;
                    break;
                }
                //s[j] = '\0';
                //v++;
            //}
        }
        //v = 1;
    }
    //cout<<l<<endl;
    //cout<<count<<endl;
    cout<<l-count;
    //cout<<s;

    return 0;
}