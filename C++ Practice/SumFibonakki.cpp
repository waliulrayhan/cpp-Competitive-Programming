#include<iostream>
using namespace std;
int main()
{
    int first=0,second=1,sum=0,k,S=0;

    cin>>k;

    if(k>0 && k<41)
    {
        for(int i=0;i<k-1;i++)
        {
            sum=first+second;
            first=second;
            second=sum;

            //cout<<sum<<"    ";
            S=S+sum;
            //cout<<S+1;
        }

        //S=S+sum;
        cout<<S+1;
    }

    return 0;
}