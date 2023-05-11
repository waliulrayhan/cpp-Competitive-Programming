#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n, m, a;
    long long int i, j;

    cin >> n >> m >> a;

    i = n / a;
    j = m / a;

    if (i * a != n)
    {
        i++;
    }

    if (j * a != m)
    {
        j++;
    }

    string s = to_string(i * j);

    cout << s;

    return 0;
}