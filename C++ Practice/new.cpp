#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char a[100], b[100];

    cout<<"Enter your first name=";
    gets(a);

    cout<<"Enter your name=";
    gets(b);

    cout<<"Your Full Name is "<<a<<" "<<b;

    return 0;
}