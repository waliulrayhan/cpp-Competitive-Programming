#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s, int len)
{
    string str;

    for (int i = 0; i < len; i++)
    {
        char c = s[i];

        auto found = str.find(c);
        if (found == std::string::npos)
        {

            str += c;
        }
    }
    return str;
}
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());

    int l= removeDuplicate(s, n).length();

    if(l==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}