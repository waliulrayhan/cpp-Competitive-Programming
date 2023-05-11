#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, count = 1;
    cin >> k >> r;
    int x = k;

    while (1)
    {
        if (x % 10 == 0)
        {
            break;
        }
        else
        {
            if (x % 10 == r)
            {

                break;
            }
            else
            {
                x = x + k;
                count++;
            }
        }
    }

    cout << count;
}