#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Input
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int minimum;
    // reduces the effective size of the array by one in  each iteration.

    for (int i = 0; i < n - 1; i++)
    {
        cout << endl
             << "Pass :" << i + 1;

        // assuming the first element to be the minimum of the unsorted array .
        minimum = i;

        // gives the effective size of the unsorted  array .

        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[minimum])
            { // finds the minimum element
                minimum = j;
            }
        }

        // putting minimum element on its proper position.
        swap(A[minimum], A[i]);

        cout << endl;
        for (int j = 0; j < n; j++)
        {
            cout << A[j] << "  ";
        }
    }

    // Output
    cout << endl
         << "This is final Output :";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "  ";
        
    }
}