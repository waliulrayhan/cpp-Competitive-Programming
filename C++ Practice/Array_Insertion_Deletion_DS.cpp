#include <iostream>
using namespace std;
int main()
{
    int A[50], n, pos, value, temp;

    cout << "Enter Array Size:";
    cin >> n;

    cout << "Enter Array Values:";
    for (size_t i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter postion for Insertion:";
    cin >> pos;

    cout << "Enter value for Insertion:";
    cin >> value;

    int j = n;
    while (j >= pos)
    {
        A[j + 1] = A[j];
        j--;
    }

    A[pos] = value;
    n = n + 1;

    cout << "Final Array is:" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << A[i] << "  ";
    }
    cout<<endl;

    cout << "Enter postion for Deletion:";
    cin >> pos;

    for (size_t i = pos; i < n; i++)
    {
        A[i] = A[i + 1];
    }
    n = n - 1;

    cout << "Final Array is:" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << A[i] << "  ";
    }
}