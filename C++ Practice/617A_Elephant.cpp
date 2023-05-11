#include<iostream>
using namespace std;
int main()
{
    int x, a=0, b=0, c=0, d=0, e=0;

    cin>>x;

    a=x/5;
    x=x%5;

    b=x/4;
    x=x%4;

    c=x/3;
    x=x%3;

    d=x/2;
    x=x%2;

    e=x/1;
    x=x%1;

    cout<<a+b+c+d+e;

    return 0;
}