#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long int x = n % 3;
        long long int ans = int(n / 3);
        if (n == 1)
        {
            //cout << 2 << endl;
            ans= 2;
            
        }
        else if (x > 0)
        {
            ans++;
        }
        cout << ans << endl;
    }
}