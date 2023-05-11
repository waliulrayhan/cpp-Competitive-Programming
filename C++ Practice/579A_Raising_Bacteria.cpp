#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, count=0, i=1, remainder, binary=0;

    cin>>n;

    while(n != 0)
    {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }

    int s[]={binary};
    
    for(int x=0;x<100;x++)       //Unsolved
    {
        cout<<s[x];
    }
    
    return 0;
}