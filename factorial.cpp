#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // Base case
    if (n == 0)
        return 1;

    // Recursive case
    //  Return the product of n and the factorial of (n-1)
    //  int smallprblm = factorial(n-1);
    //  int bigprblm = n * smallprblm;
    //  return bigprblm;

    // OR
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;
}