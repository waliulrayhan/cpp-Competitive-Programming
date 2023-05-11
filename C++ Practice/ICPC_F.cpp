#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(int cs)
{
    int n,cnt=0,len,l;
    string s,t;
    set<string>st;
    map<string,int>mp,m;
    //vector<pair<int,int>>v;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k <=4; k++)
        {
            cin>>s;
            // cout<<s<<endl;
            if((k)%4==0){
                mp[s]++;
            }
            if((k)%3==0){
                t="";
                //cout<<s<<endl;
                len=st.size();
                st.insert(s);
                if(len!=st.size())
                {
                    for (int j = 6; j < s.size(); j++)
                    {
                        t+=s[j];
                        // cout<<s[j];
                    }
                }
                //cout<<endl;
               // cout<<t<<endl;
                m[t]++;
            }
        }
        
    }
    map<string, int>::iterator it = mp.begin();
    
    // Iterate through the map and print the elements
    while (it != mp.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        ++it;
    }
        
}
int main()
{
    long long t=1,c=1;
   // cin >> t;

    while (t--)
    {
        solve(c);
        c++;
    }
}