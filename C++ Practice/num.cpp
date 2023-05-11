#include<iostream>
using namespace std;
int main()
{
    int A,B,sum;

    cin>>A;
    cin>>B;

    if(A>0 && B<10001)
    {
        sum=A+B;
        cout<<sum;
    }

    return 0;
}