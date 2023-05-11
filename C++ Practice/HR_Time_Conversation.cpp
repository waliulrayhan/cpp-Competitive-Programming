#include <bits/stdc++.h>
using namespace std;
int main()
{
    string time;
    cin >> time;

    int len = time.length();
    //for (size_t i = 0; i < len; i++)
    //{         It is time AM/PM
        cout << time[len-2] << " " << time[len - 1]<<endl;
    //}

    char s1 = time[0];
    int i1 = (int)s1;
    char s2 = time[1];
    int i2 = (int)s2;

    //string s = (int)s1+s2;


    cout << i1 << " " << i2<<endl;

    if ((time[len-2]=='A') and (time[len-1]=='M'))
    {
        /* code */
    }
    
}