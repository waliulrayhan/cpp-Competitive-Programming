#include <iostream>
using namespace std;
int main()
{
    int m, n;

    cin >> m >> n;

    int x = min(m, n);

    if (x % 2 == 0)
    {
        cout << "Malvika" << endl;
    }

    if (x % 2 != 0)
    {
        cout << "Akshat" << endl;
    }
}