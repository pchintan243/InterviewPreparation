#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (j == 1 || j==(2*i + 1))
            {
                cout << "1 ";
            }
            else {

                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}