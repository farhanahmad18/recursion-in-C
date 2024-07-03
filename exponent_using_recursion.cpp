#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    // Base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // Recursive call
    int ans = power(a, b / 2);

    // If b is even
    if (b % 2 == 0)
        return ans * ans;
    else // If b is odd
        return a * ans * ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << endl;

    int exponent = power(a, b);
    cout << exponent << endl;
    return 0;
}