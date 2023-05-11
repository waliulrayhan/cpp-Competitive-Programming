#include <bits/stdc++.h>
using namespace std;
void positive(float a[200], float n)
{
    float positive = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive++;
        }
    }

    cout << fixed << setprecision(6) << positive/n << endl;
}
void negative(float a[200], float n)
{
    float negative = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            negative++;
        }
    }

    cout << fixed << setprecision(6) << negative / n << endl;
}
void zero(float a[200], float n)
{
    float zero = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zero++;
        }
    }

    cout << fixed << setprecision(6) << zero / n << endl;
}

int main()
{
    float n;
    cin >> n;

    float arr[200];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    positive(arr, n);
    negative(arr, n);
    zero(arr, n);
}