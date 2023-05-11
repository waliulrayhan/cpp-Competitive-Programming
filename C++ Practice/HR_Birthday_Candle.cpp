#include<bits/stdc++.h>
using namespace std;
void birthdayCakeCandles(int a[], int n)
{
    int mx = a[0], count=0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        if(a[i]==mx)
        {
            count++;
        }
    }
    cout<<count;

}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    birthdayCakeCandles(arr, n);

}