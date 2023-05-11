#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;

    cin>>a>>b;
    //It won't take any sapce

    getline(cin,a);
    //It is enable to take space

    transform(a.begin(), a.end(), a.begin(), ::tolower);//liberary Function(must to be use #include<bits/stdc++.h> header file)
    transform(b.begin(), b.end(), b.begin(), ::tolower);//liberary Function(must to be use #include<bits/stdc++.h> header file)

    if(a>b)
    {
        cout<<"1"<<endl;
    }

    if(a<b)
    {
        cout<<"-1"<<endl;
    }

    if(a==b)
    {
        cout<<"0"<<endl;
    }

    return 0;
}