#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    fib(7);
    for(int i = 0; i < 7; i++) {
        cout << fib(i) << " ";
    }
    return 0;
}