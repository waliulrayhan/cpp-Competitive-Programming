#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int cnt=0;
        string s;
        cin>>s;

        string sample="codeforces";

        for (int i = 0; i < sample.length(); i++)
        {
            if (s[i]!=sample[i])
            {
                cnt++;
            }
            
        }
        
        cout<<cnt<<endl;
    }
    
}