#include<iostream>
using namespace std;
int main()
{
    int n, f, mas[100];

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> f;
        mas[f] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << mas[i] << " ";
    }

    return 0;
}