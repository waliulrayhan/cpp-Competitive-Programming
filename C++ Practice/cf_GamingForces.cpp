#include <iostream>
using namespace std;
int main()
{
    int t, n, h;
    cin >> t;

    while (t--)
    {
        int count=0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> h;

            if (h == 1)
            {
                count++;
            }
        }

        cout << n - count / 2 << endl;
    }
}