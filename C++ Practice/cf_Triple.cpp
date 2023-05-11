#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    //cin>>t;

    //while (t--)
    //{
        int n, count = 1;
        cin >> n;

        int a[n], x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        for (int i = 0; i < n; i++)
        {
            cout<< a[i]<< " ";
        }

        for (int i = 0; i < n-1; i++)
        {
            if (a[i + 1] == a[i])
            {
                count++;
                cout <<"count is " <<count << endl<<endl;
                x = a[i];
                if (count >= 3)
                {
                    cout << x << endl;
                }
            }
            if (a[i + 1] != a[i])
            {
                count = 1;
            }
        }

        
        /*else
        {
            cout << -1<<endl;
        }*/
        //count=0;
    //}
}