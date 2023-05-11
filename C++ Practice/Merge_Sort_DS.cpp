#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int left, int mid, int right)
{
    int size_left, size_right;

    size_left = mid - left + 1;
    size_right = right - mid;

    int L[size_left], R[size_right];

    for (size_t i = 0; i < size_left; i++)
    {
        L[i] = A[left + i];
    }

    for (size_t i = 0; i < size_right; i++)
    {
        R[i] = A[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while (i < size_left && j < size_right)
    {
        if (L[i] < R[j])
        {
            A[k] = L[i];
            k++;
            i++;
        }
        else
        {
            A[k] = R[j];
            k++;
            j++;
        }
    }

    while (i < size_left)
    {
        A[k] = L[i];
        k++;
        i++;
    }

    while (i < size_right)
    {
        A[k] = R[j];
        k++;
        j++;
    }
}
void merge_sort(int A[], int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int mid = left + (right - left) / 2;

    merge_sort(A, left, mid);
    merge_sort(A, mid + 1, right);
    merge(A, left, mid, right);
}

int main()
{
    int A[20], size, i;

    cout << "Enter size of the list: ";
    cin >> size;

    cout << "Enter integer values: ";
    for (i = 0; i < size; i++)
    {
        cin >> A[i];
    }

    merge_sort(A, 0, size-1);

    cout << "List after sorting is: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << A[i] << "    ";
    }
}