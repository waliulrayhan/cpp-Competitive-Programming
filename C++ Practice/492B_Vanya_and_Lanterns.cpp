#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, l, i;

    cin >> n >> l;

    long long int a[n], maxdistance[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (i = 0; i < n ; i++)
    {
        maxdistance[i]=a[i+1]-a[i];
    }

    long double maxi = *max_element(maxdistance, maxdistance + (n-1));
    /*maxi=maxi/2;

    long double x = a[0];
    long double y = l-a[n-1];
    long double xy = max(x, y);

    long double ans = max(maxi,xy);

    cout<<fixed<<setprecision(10)<<xy;*/

    long double x = a[0];
    maxi=maxi/2;
    //long double y = l-a[n-1];
    long double ans = max(x, maxi);
    long double z = l-a[n-1];
    long double xy = max(z, ans);

    cout<<fixed<<setprecision(10)<<xy;

    return 0;
}
