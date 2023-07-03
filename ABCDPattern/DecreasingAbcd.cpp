#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i, k = j - 1 + 'A'; j >= 1, k >= 'A'; j--, k--)
        {
            cout << char(k) << " ";
        }
        cout << endl;
    }
    return 0;
}