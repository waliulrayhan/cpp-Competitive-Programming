#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*string s1, s2, s3, news1, news2, news3;

    cin >> s1 >> s2 >> s3;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    sort(s3.begin(), s3.end());

    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = s3.length();

    cout << endl
         << l1 << endl
         << l2 << endl
         << l3 << endl
         << endl;

    cout << endl
         << s1 << endl
         << s2 << endl
         << s3 << endl
         << endl;

    auto res1 = unique(s1.begin(), s1.end());
    auto res2 = unique(s2.begin(), s2.end());
    auto res3 = unique(s3.begin(), s3.end());

    news1 = string(s1.begin(), res1);
    news2 = string(s2.begin(), res2);
    news3 = string(s3.begin(), res3);

    int newl1 = news1.length();
    int newl2 = news2.length();
    int newl3 = news3.length();

    cout << endl
         << news1 << endl
         << news2 << endl
         << news3 << endl
         << endl;

    cout << endl
         << newl1 << endl
         << newl2 << endl
         << newl3 << endl
         << endl;

    if (((l1 - newl1) + (l2 - newl2)) == (l3 - newl3))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }*/

    string a, b, c;
    cin >> a >> b >> c;
    a += b;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    if (a == c)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }
    return 0;
}