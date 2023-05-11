#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3], b[3], A=0, B=0;

    for (size_t i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    for (size_t i = 0; i < 3; i++)
    {
        cin>>b[i];
    }

    for (size_t i = 0; i < 3; i++)
    {
        if (a[i]>b[i])
        {
            A++;
        }
        
        if (a[i]<b[i])
        {
            B++;
        }
        
    }

    cout<<A<<" "<<B<<endl;
    
    
}