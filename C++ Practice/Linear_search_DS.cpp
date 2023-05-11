#include<iostream>
using namespace std;
int linear_search(int A[], int n, int x)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(A[i]==x)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int A[12];

    for(int i=1;i<=10;i++)
    {
        cin>>A[i];
    }

    int r=linear_search(A, 10, 5);

    cout<<r;

    return 0;
}