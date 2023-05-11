#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    if(n>=1 && n<=100)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>s;
        //}
            int lenth=s.size();
        //for(int i=1;i<=n;i++)
        //{
            if(lenth<=10)
            {
                cout<<s<<endl;
            }
            else
            {
                cout<<s[0]<<lenth-2<<s[lenth-1]<<endl;
            }
        }
    }
    return 0;
}