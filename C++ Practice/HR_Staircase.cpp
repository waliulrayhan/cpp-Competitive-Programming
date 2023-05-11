#include<bits/stdc++.h>
using namespace std;
void staircase(int n)
{
    for (size_t row = 0; row < n; row++)
    {
        for (size_t col = 0; col < n-row-1; col++)
        {
            cout<<" ";
        }

        for (size_t col = 0; col <= row; col++)
        {
            cout << "#";
        }

        cout<<endl;
    }

}

int main()
{
    int N;
    cin>>N;

    staircase(N);
}