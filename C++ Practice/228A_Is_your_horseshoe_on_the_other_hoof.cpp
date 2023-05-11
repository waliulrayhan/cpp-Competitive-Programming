#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;

    cin>>a>>b>>c>>d;

    if((a!=b) && (a!=c) && (a!=d) && (b!=c) && (b!=d) && (c!=d))
    {
        cout<<"0";
    }

    else if((a==b) && (a==c) && (a==d) && (b==c) && (b==d) && (c==d))
    {
        cout<<"3";
    }

    else
    {
        if((a!=b&&a!=c&&a!=d&&b==c&&c==d) || ((b!=a&&b!=c&&b!=d&&a==c&&c==d) || (c!=a&&c!=b&&c!=d&&a==b&&b==d) || (d!=a&&d!=b&&d!=c&&a==b&&b==c)))
        {
            cout<<"2";
        }

        else if(((a!=b&&c==d) || (a!=d&&b==c) || (a==b&&c!=d) || (a==c&&b!=d) || (a==d&&b!=c) || (c==d&&a!=b) || (b==c&&a!=d) || (a!=c&&b==d)))
        {
            cout<<"1";
        }

        else
        {
            cout<<"2";
        }
    }

    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[102];
    int i;
    int sum=0;
                                                                    Same Result Found in Online
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        sort(a,a+4);
        for(int i=0;i<3;i++){
        if(a[i]==a[i+1])
        {
            sum++;
        }
    }
   cout<<sum<<endl;
    return 0;
}
*/