#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, H, M, result, output=0, flag = 0;
        cin >> n >> H >> M;

        int time[n];

        result = (H * 60) + M;
         //cout << result << endl;

        int h, m;
        for (int i = 0; i < n; i++)
        {
            cin >> h >> m;
            time[i] = (h * 60) + m;

             //cout << time[i] << endl; // / 60 << " " << result % 60 << endl;
        }

        // for (size_t i = 0; i < n + 1; i++)
        // {
        //     cout << "Time " << time[i];
        // }

        sort(time, time + n);

        // for (size_t i = 0; i < n; i++)
        // {
        //     cout << endl
        //          << "Time " << time[i];
        // }
        // cout << endl;
        for (size_t i = 0; i < n; i++)
        {
            //
            if (result <= time[i])
            {
                // cout<<time[i]<<endl;
                output = time[i] - result;
                flag++;
                break;
            }
        }

        if (flag == 0)
        {
            output = (1440 - result) + time[0];

        }

        // cout<<output<<endl;
        cout << output / 60 << " " << output % 60 << endl;
            //  << endl
            //  << endl;
    }
}