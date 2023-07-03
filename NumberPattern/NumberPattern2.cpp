#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int t;
    int h;
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k <= n - 1; k++)
        {
            cout << "  ";
        }
        t = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == j || i > j)
            {
                cout << t++ << " ";
                if (i == j)
                {
                    h = t - 2;
                }
            }
            else
            {
                cout << h-- << " ";
            }
        }
        cout << endl;
    }
    return 0;
}


//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1