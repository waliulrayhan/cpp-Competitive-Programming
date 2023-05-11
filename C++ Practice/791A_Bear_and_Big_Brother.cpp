#include<iostream>
using namespace std;
int main()
{
    int a, b, sum1, sum2, i, j;

    cin>>a>>b;

    sum1=a;
    sum2=b;

    for(int i=1;i<100;i++)
    {
        sum1=sum1*3;

        sum2=sum2*2;

        if(sum1>sum2)
        {
            cout<<i;
            break;
        }
    }
    

    return 0;
}