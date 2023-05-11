#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0, x = 0;
        string s;
        cin >> n >> s;

        for (size_t i = 0; i < n; i++)
        {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
            {
                count = 0;
            }
            else
            {
                if (count == 4)
                {
                    cout << "NO" << endl;
                    x = x + 1;
                    break;
                }
                else
                {
                    count++;
                }
            }
        }

        // if (x == 0)
        // {
            cout << "YES" << endl;
            //break;
        //}
    }
}