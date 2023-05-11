#include <bits/stdc++.h>
using namespace std;
long long int mini(long long int a[5])
{
    long long int min = a[0];
    for (size_t i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}

long long int maxi(long long int a[5])
{
    long long int mx = a[0];
    for (size_t i = 0; i < 5; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }

    return mx;
}

int main()
{
    long long  int arr[5], sum = 0;

    for (size_t i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    long long int mi = mini(arr);
    long long int mx = maxi(arr);

    cout << sum - mx << " " << sum - mi << endl;
}