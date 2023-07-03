#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int h = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--, h++)
        {
            cout << char(h) << " ";
        }
        cout << endl;
    }
    return 0;
}