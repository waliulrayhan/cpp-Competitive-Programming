#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int lift1, lift2;

        lift1 = a;

        if (b < c)
        {
            lift2 = c + (c - b);
        }
        if (b > c)
        {
            lift2 = b;
        }

        if (lift1 < lift2)
        {
            cout << "1"<<endl;
        }
        if (lift1 > lift2)
        {
            cout << "2"<<endl;
        }
        if (lift1 == lift2)
        {
            cout << "3"<<endl;
        }
    }
}