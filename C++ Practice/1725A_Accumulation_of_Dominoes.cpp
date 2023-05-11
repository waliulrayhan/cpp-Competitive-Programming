#include <iostream>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;

    if (m == 1)
    {
        cout << n - 1 << endl;
    }
    else
    {
        cout << n * (m - 1) << endl;
    }
}