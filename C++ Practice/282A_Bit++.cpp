#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0, n;
    string letter;

    cin>>n;

    if((n>=1 && n<=150))
    {
    for(int i=1;i<=n;i++)
    {
        cin>>letter;

        if((letter=="X++")||(letter=="++X"))
        {x++;}

        else if((letter=="X--")||(letter=="--X"))
        {x--;}
    }
    }
    cout<<x;

    return 0;
}