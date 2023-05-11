#include<iostream>
using namespace std;
int main()
{
    int n, t;
    string s, a;
    char temp;

    cin>>n>>t>>s;

    for(int j=0;j<t;j++)
    {
        for(int i=1;i<n;i++)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
        }
    }

    cout<<s;

    return 0;
}