#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // for (int k = n - 1; k >= i; k--)
        // {
        //     cout << " ";
        // }
        for (int j = n; j >= 1; j--)
        {
            if (j < i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}