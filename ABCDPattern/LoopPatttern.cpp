#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int k = 'a', i = 1; i <= n; k++, i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(k) << " ";
        }
        cout << endl;
    }
    return 0;
}