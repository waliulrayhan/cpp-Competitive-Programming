#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[100], n, j, item;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // insertion_sort;
    for (int i = 1; i < n; i++)
    {
        cout << endl
             << "Pass :" << i;

        item = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > item)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = item;

        cout << endl;
        for (int j = 0; j < n; j++)
        {
            cout << A[j] << "  ";
        }
    }

    cout << endl
         << "This is final Output : ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}