#include<iostream>
using namespace std;
int main()
{
    int t, n, a[1000], i, j, pass=0, temp, p=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i = 0; i<n; i++)        //
    {
   	    for(j = i+1; j<n; j++)
   	    {
            if(a[i] > a[j])
		    {                       //This is Bouble Sort Algorithm
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                //pass++;
            }
            pass++;
   	    }
   	    //p++;
   }

   cout<<j;

   return 0;
}