#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 'a', j = 1; j <= i; k++, j++)
        {
            cout << char(k) << " ";
        }
        cout << endl;
    }
    return 0;
}