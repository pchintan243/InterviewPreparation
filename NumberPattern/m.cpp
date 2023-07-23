#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n + 1; j > i; j--)
        {
            cout << j - i << " ";
        }
        cout << endl;
    }
    return 0;
}