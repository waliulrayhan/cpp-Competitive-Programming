#include <iostream>
#include <cmath>

int removeFirst(int n)
{
    int tmp(0);
    for (int i(0);; ++i)
    {
        int m = n % 10;
        n /= 10;
        if (n != 0)
        {
            tmp += std::pow(10, i) * m;
        }
        else
        {
            break;
        }
    }
    return tmp;
}


int main(){
    int s;
    std::cin >> s;
    s = removeFirst(s);
    std::cout << s;
}