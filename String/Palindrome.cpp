// C++ program to check whether two strings are anagrams
// of each other
#include <bits/stdc++.h>
using namespace std;

/* function to check whether two strings are anagram of
each other */
bool areAnagram(string str)
{
    // Get lengths of both strings

    return true;
}

// Driver code
int main()
{
    string str = "maam";
    int flag = 0, i;

    int n1 = str.length();

    for (i = 0; i < n1 / 2; i++)
    {
        // Checking if string is palindrome or not.
        if (str[i] == str[n1 - i - 1])
            flag++;
    }

    if (flag == i)
        cout << "String entered is palindrome";
    else
        cout << "String entered is not palindrome";
    return 0;
}
