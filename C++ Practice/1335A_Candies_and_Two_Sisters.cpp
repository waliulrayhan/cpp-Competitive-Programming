#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, count = 0;

    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }
        else
        {
            cout<<n/2<<endl;
        }
    }
}