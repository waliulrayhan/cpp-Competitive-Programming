#include <iostream>
using namespace std;
int main()
{
    int s, t, a, b, m, n, cs = 0, ct = 0;
    cin >> s >> t >> a >> b >> m >> n;

    int apple[m], orange[n];

    for (size_t i = 0; i < m; i++)
    {
        cin >> apple[i];
        apple[i] += a;
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> orange[i];
        orange[i] += b;
    }

    // for (size_t i = 0; i < m; i++)
    // {
    //     cout << apple[i] << "   ";
    // }
    // cout << endl;
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout << orange[i] << "    ";
    // }
    // cout << endl;
    // cout << endl;
    // cout << endl;

    for (size_t i = 0; i < m; i++)
    {
        if (apple[i] >= s and apple[i] <= t)
        {
            cs++;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        if (orange[i] >= s and orange[i] <= t)
        {
            ct++;
        }
    }

    cout << cs << endl
         << ct;
}