#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string t;

    cin>>t;

    string s = "WUB";
    
    for(int x=0;x<t.size();x++)
    {
        string::size_type i = t.find(s);

        if (i != std::string::npos)
        {
            t.erase(i, s.length());
            t.insert(i, " ");
        }
    }

    cout<<t;

    return 0;
}