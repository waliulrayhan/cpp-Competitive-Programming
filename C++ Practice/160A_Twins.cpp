#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, s = 0, count = 0;

    cin >> n;

    int num[n];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        sum = sum + num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (s + num[i] > sum / 2)
        {
            break;
        }
        else
        {
            s = s + num[i];
            count++;
        }
    }

    cout << count+1;
}