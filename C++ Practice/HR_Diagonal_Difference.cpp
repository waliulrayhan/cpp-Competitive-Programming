#include <bits/stdc++.h>
using namespace std;
int diagonalDifference(int a[200][200], int n)
{
    int sum1 = 0, sum2 = 0;

    for (size_t row = 0; row < n; row++)
    {
        for (size_t col = 0; col < n; col++)
        {
            if (row == col)
            {
                sum1 = sum1 + a[row][col];
            }
        }
    }

    for (size_t row = 0; row < n; row++)
    {
        for (size_t col = 0; col < n; col++)
        {
            if ((row + col) == (n - 1))
            {
                sum2 = sum2 + a[row][col];
            }
        }
    }

    return abs(sum1 - sum2);
}

int main()
{
    int N;
    cin >> N;

    int arr[200][200];

    for (size_t row = 0; row < N; row++)
    {
        for (size_t col = 0; col < N; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << diagonalDifference(arr, N);
}