#include<iostream>
using namespace std;
int main()
{
    int n, p, sum=0;
    double avg;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>p;

        sum=sum+p;
    }

    avg=sum/(float)n;

    printf("%.12lf", avg);

    return 0;
}