#include<iostream>
using namespace std;
void selection_sort(int A[], int n)
{
    int i, j, index_min, temp;

    for(i=0;i<n-1;i++)
    {
        index_min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[index_min])
            {
                index_min=j;
            }
        }

        if(index_min!=i)
        {
            temp=A[i];
            A[i]=A[index_min];
            A[index_min]=temp;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int A[12], n=10;

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    selection_sort(A, n);
}