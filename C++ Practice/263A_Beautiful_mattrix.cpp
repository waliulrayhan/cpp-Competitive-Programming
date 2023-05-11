#include<iostream>
using namespace std;
int main()
{
    int row, col, a[6][6], x, y, countx=0, county=0;

    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            cin>>a[row][col];
        }
    }

    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            if(a[row][col]==1)
            {
                x=row;
                y=col;
            }
        }
    }

    for(int i=1;i<=5;i++)
    {
        if(y<3)
        {
            y++;
            county++;
        }

        if(y>3)
        {
            y--;
            county++;
        }

        if(y==3)
        {
            county=county;
        }
    }

    for(int i=1;i<=5;i++)
    {
        if(x<3)
        {
            x++;
            countx++;
        }

        if(x>3)
        {
            x--;
            countx++;
        }

        if(x==3)
        {
            countx=countx;
            break;
        }
    }

    cout<<countx+county;

    return 0;
}