#include <bits\stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long int n, m;
    long long int count = 0, temp = 1;

    cin >> n >> m;

    long long int a;

    for (size_t i = 0; i < m; i++)
    {
        cin >> a;

        count += (a - temp + n) % n;
        temp = a;
    }

    cout << count;
}