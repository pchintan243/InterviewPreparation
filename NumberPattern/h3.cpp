#include <iostream>
using namespace std;

int main()
{
    int n = 5, m = 3, sum = 1;
    for (int i = 1; i <= m; i++)
    {
        sum = sum * n;
    }
    cout << sum;
    return 0;
}