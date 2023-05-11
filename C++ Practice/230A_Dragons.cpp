/*#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct note
{
    int dragon;
    int add;
}g[1010];

int cmp(note x, note y)
{
    if (x.dragon == y.dragon)
    {
        return x.dragon > y.dragon;
    }
    return x.dragon < y.dragon;
}

int main()
{
   //note dragon[10005];
    int s, n, count = 1;
    cin >> s >> n;
    int x[n], y[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&dragon[i].x,&dragon[i].y);
    }

    sort(x, x + n);

    for (int i = 0; i < n; i++)
    {
        if (s <= x[i])
        {
            count = 0;
            break;
        }

        else
        {
            s = s + y[i];
        }
    }

    if (count == 1)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
}*/

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct Node
{
    int x, y;
} g[1010];

bool cmp(Node a, Node b)
{
    return a.x < b.x;
}

int main()
{
    int n, s, i;
    while (scanf("%d%d", &s, &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d%d", &g[i].x, &g[i].y);
        }

        sort(g, g + n, cmp);

        for (i = 0; i < n; i++)
        {
            if (s > g[i].x)
            {
                s += g[i].y;
            }
            else
            {
                break;
            }
        }

        if (i == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}