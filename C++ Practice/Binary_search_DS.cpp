#include <iostream>
using namespace std;
int binary_search(int A[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (A[mid] == x)
        {
            return mid;
        }
        if (A[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int A[12];
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int r = binary_search(A, 10, 5);

    cout << r;
}