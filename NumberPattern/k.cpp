#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int k = i%2;
        int count = k;
        for (int j = 0; j <= i; j++)
        {
            if (k % 2 == 0)
            {
                cout << count--;
            }
            else
            {
                cout << count++;
            }
        }
        cout << endl;
    }
    return 0;
}