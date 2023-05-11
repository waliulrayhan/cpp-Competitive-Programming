#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, x, y, z;
        cin >> a >> b >> c;

        x = min(a, b);

        y = min(b, c);

        z = min(c, a);

        if ((x == y) and (x == z))
        {
            cout << "YES" << endl;
        }

        else
            cout << "NO" << endl;
    }
}