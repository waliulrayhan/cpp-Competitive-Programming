#include<iostream>
using namespace std;
int main()
{
    int n, a[100], temp;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
