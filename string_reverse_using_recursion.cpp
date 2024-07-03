#include <bits/stdc++.h>
using namespace std;

void reverse(string &str, int i)
{
    int n = str.length();
    cout << "Call recieved for : " << str << endl;
    // Base case
    if (i >= n-i-1)
        return ;

    // Processing
    swap(str[i], str[n-i-1]);
    i++;
    n--;

    // Recursive call
    reverse(str, i);
}

int main()
{
    string name = "farhan";

    reverse(name, 0);

    cout << name << endl;
    return 0;
}