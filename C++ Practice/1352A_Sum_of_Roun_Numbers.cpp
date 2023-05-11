#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 1, ans = 0;
        cin >> n;

        string s = to_string(n);

        // cout<<s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                ans++;
            }
        }

        if (ans != 0)
            cout << s.length() - ans << endl;

        else
            cout << s.length() << endl;

        while (n != 0)
        {
            if ((n % 10) * count != 0)
            {
                cout << (n % 10) * count << " ";
                n = n / 10;
                count = count * 10;
            }
            else
            {
                ans++;
                n = n / 10;
                count = count * 10;
            }
        }

        cout << endl;
    }
}