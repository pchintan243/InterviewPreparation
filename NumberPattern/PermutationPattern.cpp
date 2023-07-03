#include <iostream>
using namespace std;

// Permutation: nCr = n! / (n-r)! * r!

int findFac(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * findFac(n - 1);
    }
}
int findPermutation(int n, int r)
{
    int perm = findFac(n) / (findFac(n - r) * findFac(r));
    return perm;
}
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n - 1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << findPermutation(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}