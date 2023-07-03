#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int h;
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k <= n - 1; k++)
        {
            cout << "  ";
        }
        h = i;
        for (int j = i; j >= 1; j--)
        {
            cout << h << " ";
            h++;
        }
        h -= 2;
        for (int t = 1; t < i; t++)
        {
            cout << h << " ";
            h--;
        }
        cout << endl;
    }
    return 0;
}