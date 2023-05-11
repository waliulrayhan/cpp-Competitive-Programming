#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{

char s[100];
int i, j, temp;

cin>>s;

for(i=0; s[i+1]!='\0'; i++)
{
    for(j=i; s[j]!='\0'; j++)
    {
        if(s[i]!='+' && s[j]!='+')
        {
            if(s[j]<s[i])
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
}

cout<<s;

return 0;
}