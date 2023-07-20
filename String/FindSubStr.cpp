#include <iostream>
using namespace std;

int findSum(string s)
{
    int sum = 1;
    for (int i = 0; i < s.length(); i++)
    {
        sum *= s[i];
    }
    return sum;
}

bool check(string s, int sum, int t)
{
    int y;
    for (int i = 0; i < s.length() - t + 1; i++)
    {
        y = findSum(s.substr(i, t));
        if (y == sum)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s = "abcde";
    string t = "cde";
    int sum = findSum(t);
    bool get = check(s, sum, t.length());
    if (get)
    {
        cout << "found";
    }
    else
    {
        cout << " NOt found";
    }
    return 0;
}