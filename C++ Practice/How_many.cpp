#include<iostream>
using namespace std;
int main()
{
    int s, t, count1=0, count2=0, count3=0, b=0, c=0, a=0;

    cin>>s>>t;

    /*for(int a=0;a<s;a++)
    {
        if((a+b+c)==s)
        {
            break;
        }
        count1++;
    }

    for(int b=0;b<s;b++)
    {
        if((a+b+c)==s)
        {
            break;
        }
        count2++;
    }

    for(int c=0;c<s;c++)
    {
        if((a+b+c)==s)
        {
            break;
        }
        count3++;
    }*/


    while(1)
    {
        if((a+b+c<=s) && (a*b*c<=t))
        {
            continue;
        }
        a++;
        b++;
        c++;
    }


    cout<<a+b+c;
}