#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0;

    cin>>s;

    int l=s.size();

            for(int i=1;i<l;i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    count++;
                }
            }

            if((l-1)==count)
            {
                for(int i=0;i<l;i++)
                {
                    if(s[i]>='A' && s[i]<='Z')
                    {
                        s[i]=97+s[i]-65;
                    }

                    else if(s[i]>='a' && s[i]<='z')
                    {
                        s[i]=65+s[i]-97;
                    }
                }
            }

    cout<<s;

    return 0;
}