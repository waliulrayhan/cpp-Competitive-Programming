#include <iostream>
#include <time.h>
using namespace std;

long long int left(long long int i)
{
    return i * 2;
}

long long int right(long long int i)
{
    return i * 2 + 1;
}

void MAX_HEAPIFY(long long int a[], long long int i, long long int n)
{
    long long int l, r, largest, location;
    l = left(i);
    r = right(i);

    if ((l <= n) && a[l] > a[i])
    {
        largest = l;
    }

    else
    {
        largest = i;
    }

    if ((r <= n) && (a[r] > a[largest]))
    {
        largest = r;
    }

    if (largest != i)
    {
        location = a[i];
        a[i] = a[largest];
        a[largest] = location;
        MAX_HEAPIFY(a, largest, n);
    }
}

void BUILD_MAX_HEAP(long long int a[], long long int n)
{
    for (long long int k = n / 2; k >= 1; k--)
    {
        MAX_HEAPIFY(a, k, n);
    }
}

void HEAPSORT(long long int a[], long long int n)
{

    BUILD_MAX_HEAP(a, n);
    long long int i, temp;
    for (i = n; i >= 2; i--)
    {
        swap(a[i], a[1]);
        MAX_HEAPIFY(a, 1, i - 1);
    }
}

int main()
{
    long long int n;
    time_t base, estimated;

    cout << "Enter Size of Array: ";
    cin >> n;
    long long int a[n + 1];

    srand(time(0));
    for (long long int i = 1; i <= n; i++)
    {
        a[i] = rand() % 1000 + 1;
    }

    base = clock();
    HEAPSORT(a, n);
    estimated = clock();

    cout << "Here is the Sorted List :" << endl;
    for (long long int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    double time = (double)(estimated - base) / CLOCKS_PER_SEC;
    cout << "Time Complexity :" << time << "s" << endl;
}