#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, mul = 1, count = 0, zero = 0;
        cin >> n;

        int a[n];

        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
            // mul = mul * a[i];

            if (a[i] == 0)
            {
                zero++;
            }
            if (a[i] >= 0)
            {
                continue;
            }
            else
            {
                count++;
            }
        }

        if (zero != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (count % 2 == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
}