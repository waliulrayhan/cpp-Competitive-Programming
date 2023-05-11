#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int arrayCount(int N, int T)
{
    int i, j, temp, a[100], sum=0, count=0;
    for(int i=1;i<=N;i++)
        {
            cin>>a[i];

        }

        for(i=1; i<=N; i++)
        {
            for(j=i+2; j<=N; j++)
            {
                if(a[j] <a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

            for(int i=1;i<=N;i++)
            {

                if(a[i]<0)
                {
                    count++;

                }
            }
            
            return count;   
}

int arraySum(int N, int T)
{
    int i, j, temp, a[100], sum=0, count=0;
    for(int i=1;i<=N;i++)
        {
            cin>>a[i];

        }

        for(i=1; i<=N; i++)
        {
            for(j=i+2; j<=N; j++)
            {
                if(a[j] <a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

            for(int i=1;i<=N;i++)
            {

                if(a[i]>0)
                {
                    sum=sum+a[i];
                }
            }

            return sum; 
}




int main()
{
    int T, N, a[100], i, j, temp;

    cin>>T;

    for(int i=1;i<=T;i++)
    {
        cin>>N;
        arraySum(N,T);
        //arrayCount(N,T);
        //for(int i=1;i<=T;i++)
        //{

            //cout<<"Case "<<i<<": "<<arraySum()<<" "<<arrayCount()<<endl;
        //}
        
    }

}