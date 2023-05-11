#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }

    sort(x, x+n);

    /*for (int i = 0; i < n; i++)
    {
        cout<< x[i]<<" ";
    }*/

    cout << x[3] - x[0] << " " << x[3] - x[1] << " " << x[3] - x[2];
}