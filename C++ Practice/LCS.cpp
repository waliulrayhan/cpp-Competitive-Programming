#include<bits/stdc++.h>
#define MAX_N 1001
using namespace std;
typedef long long lld;

int n, m;
string A, B;
int dp[MAX_N][MAX_N];


inline int LCS()
{
    for (int i=0;i<=n;i++) dp[i][0] = 0;
    for (int j=0;j<=m;j++) dp[0][j] = 0;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            if (A[i-1] == B[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }
    return dp[n][m];
}

inline string getLCS()
{
    string ret;
    stack<char> S;
    int ii = n, jj = m;
    while (ii != 0 && jj != 0)
    {
        if (A[ii-1] == B[jj-1])
        {
            ret+=A[ii-1];
            ii--; jj--;
        }
        else if (dp[ii-1][jj] > dp[ii][jj-1]) ii--;
        else jj--;
    }
    reverse(ret.begin(),ret.end());
    return ret;
}

int main()
{
    cout<<"Enter String 1: ";
    cin>>A;
    cout<<"Enter string 2: ";                                   
    cin>>B;
    n = A.size();
    m=B.size();
    printf("%d\n",LCS());
    printf("%s\n",getLCS().c_str());
    return 0;
}