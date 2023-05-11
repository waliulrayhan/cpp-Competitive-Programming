#include <bits\stdc++.h>
using namespace std;
int main()
{
    long long int n, x, count = 0;
    cin >> n;

    while (n--)
    {
        cin >> x;

        for (size_t i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                count++;
                cout<<i<<endl;
            }
        }

        if (count == 3)
        {
            cout << "YES" << endl;
            count=0;
        }
        else
        {
            cout << "NO" << endl;
            count=0;
        }
    }
}