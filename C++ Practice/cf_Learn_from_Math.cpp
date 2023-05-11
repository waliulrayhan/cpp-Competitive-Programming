#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    if (t % 2 == 0)
    {
        cout << 8 << " " << (t - 8);
    }
    else
    {
        cout << 9 << " " << (t - 9);
    }
}