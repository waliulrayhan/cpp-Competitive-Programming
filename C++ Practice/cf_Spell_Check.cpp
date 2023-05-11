#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string name = "Timur";
        sort(name.begin(), name.end());

        int n;
        cin >> n;

        string s;
        cin >> s;

        sort(s.begin(), s.end());
        cout << (s == name ? "YES" : "NO") << endl;
    }
}