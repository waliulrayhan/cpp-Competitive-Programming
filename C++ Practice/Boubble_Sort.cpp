#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Input
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Boubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        cout << endl
             << "Pass :" << i + 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }

            cout << endl;
            for (int j = 0; j < n; j++)
            {
                cout << arr[j] << "  ";
            }
        }
        cout << endl;
    }

    // Output
    cout << endl
         << "This is final Output :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}