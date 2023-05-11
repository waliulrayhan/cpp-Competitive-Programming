#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;

    double f[m];
    for (int i = 0; i < m; i++)
    {
        cin>>f[i];
    }

    sort(f, f+m);
    double best = INFINITY;
    
    for (int i = 0; i < m-n; i++)
    {
        best = min(best, f[i+n-1]-f[i]);
    }
    cout<<endl<<best;

}