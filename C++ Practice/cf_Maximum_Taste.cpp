#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d, max1, max2;
        cin >> a >> b >> c >> d;

        if (a > b)
            max1 = a;

        else
            max1 = b;

        if (c > d)
            max2 = c;

        else
            max2 = d;

        cout << max1 + max2 << endl;
    }
}