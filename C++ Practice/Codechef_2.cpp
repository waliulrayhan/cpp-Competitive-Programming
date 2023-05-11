#include <bits/stdc++.h>
using namespace std;

int countOfXs(string s, char x)
{
    int n = s.length();
    int no_of_x = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == x)
            no_of_x++;
    }

    return no_of_x;
}

string lexSmallestBinaryString(string s)
{

    int no_of_0 = countOfXs(s, '0');
    int no_of_1 = countOfXs(s, '1');

    s = "";

    for (int i = 0; i < no_of_0; i++)
    {
        s += '0';
    }

    for (int i = 0; i < no_of_1; i++)
    {
        s += '1';
    }

    return s;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (s == "10")
        {
            cout << 10 << endl;
        }

        else
        {
            cout << lexSmallestBinaryString(s) << endl;
        }
    }

    return 0;
}