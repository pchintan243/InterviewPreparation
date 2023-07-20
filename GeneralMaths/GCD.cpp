#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    if (a == b)
    {
        return a;
    }
    if (a < b)
    {
        return gcd(a, b - a);
    }
    else
    {
        return gcd(a - b, b);
    }
}

int main()
{
    int num = gcd(1, 24);
    cout << num;
    return 0;
}