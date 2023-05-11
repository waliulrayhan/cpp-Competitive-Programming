#include <bits/stdc++.h>
using namespace std;

int binary(int N)
{
    long long int B_Number = 0;
    int cnt = 0;
    while (N != 0)
    {
        int rem = N % 2;
        long long int c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }
    return B_Number;
}

int palindrome(int n)
{
    int r, sum = 0, temp;

    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        return 1;
    else
        return 0;
}

int main()
{
    // int t;
    // cin>>t;

    // while (t--)
    // {
    int a, b;
    cin >> a >> b;

    int binA = binary(a);
    int binB = binary(b);

        cout<<binA<<"     "<<binB<<endl;


    int pA = palindrome(binA);
    int pB = palindrome(binB);

    cout<<pA<<"     "<<pB<<endl;
    //}
}