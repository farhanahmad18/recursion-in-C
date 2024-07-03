#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    // Base Case
    if (i >= j)
    {
        return true;
    }
    // Processing
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int main()
{
    string str = "farhan"; // case sensitive

    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);

    if (isPalindrome)
        cout << "Is a Palindrome";
    else
        cout << "Not a Palindrome";
    return 0;
}