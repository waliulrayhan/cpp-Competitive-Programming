#include<iostream>
using namespace std;
int main()
{
    long long int n, one, five, ten, twenty, hundred;
    cin>>n;

    hundred=n/100;
    n=n%100;

    twenty=n/20;
    n=n%20;

    ten=n/10;
    n=n%10;

    five=n/5;
    n=n%5;

    one=n/1;
    n=n%1;

    cout<<hundred+twenty+ten+five+one;
}