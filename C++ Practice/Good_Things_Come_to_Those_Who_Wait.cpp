/*#include<iostream>
using namespace std;
int main()
{
    int T, K, N[10], mul=1, nul[10], i;

    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>K;
        if(K>0)
        {
            for(int j=0;j<K;j++)
            {
                cin>>N[j];
                nul[]=mul*N[j];
            }
        }
        cout<<"Case "<<i<<": "<<mul<<endl;
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int T, K, N[50], mul[50], i, j;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        cin >> K;
        for(j=1; j<=K; j++)
        {
            cin >> N[j];
        }
    }

    for(i=1; i<=T; i++)
    {
        mul[i]=1;
        for(j=1; j<=K; j++)
        {
            if(K==1)
            {
                mul[i] = N[j] * N[j];
            }
            else
            {
                mul[i] *= N[j];
            }
        }
    }
    //Output
    for(i=1; i<=T; i++)
    {
        cout << "Case " << i << ": " << mul[i] << endl;
    }
    return 0;
}