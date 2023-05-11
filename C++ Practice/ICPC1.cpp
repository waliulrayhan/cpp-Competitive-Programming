#include<iostream>
using namespace std;
int main()
{
    int N, ans;

    cin>>N;

    if(N<6)
    {
        //ans=N/3;
        cout<<"1"<<endl;
    }

    else
    {
        ans=N/6;
        cout<<ans+1<<endl;
    }
    return 0;
}