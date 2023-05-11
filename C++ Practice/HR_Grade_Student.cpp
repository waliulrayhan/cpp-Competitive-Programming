#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int grade[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> grade[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if (grade[i] < 38)
        {
            cout << grade[i] << endl;
        }
        else
        {
            int x = grade[i] / 5;
            int r = 5 * (x + 1);

            if ((r - grade[i]) < 3)
            {

                cout << r << endl;
            }
            else
            {
                cout << grade[i] << endl;
            }
        }
    }
}