#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, temp, count = 0;
    cin >> n;

    while (n--)
    {
        cin >> temp;

        if (temp == -1)
        {
            if (!sum)
            {
                count++;
            }
            else
            {
                sum--;
            }
        }
        else
        {
            sum = sum + temp;
        }
    }
    cout << count;
}