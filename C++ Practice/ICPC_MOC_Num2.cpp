#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x;
    cin >> y;
    
    cin >> z;

    int n[4];

    n[0] = x + y * z;
    n[1] = x * (y + z);
    n[2] = x * y * z;
    n[3] = (x + y) * 3;
    
    sort(n,n+4);
    cout<<n[3]<<endl;
}