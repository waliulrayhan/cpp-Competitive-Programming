#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 1;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (count % 2 != 0)
            {
                count++;
                for (int i = 0; i < m - 1; i++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else
            {
                count++;
                cout<<"#";
                for (int i = 0; i < m-1; i++)
                {
                    cout << ".";
                }
                cout<<endl;
            }
        }
    }
}