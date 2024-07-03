#include<bits/stdc++.h>
using namespace std;

void print(int n) {//Tail Recursion
    //Base case
    if ( n == 0)
        return ;

    cout << n << endl;
    print(n - 1); // Recursive call
}

void print(int n) {// Head Recursion
    //Base case
    if ( n == 0)
        return ;

    print(n - 1); // Recursive call

    cout << n << endl;
}

int main() {
    int n;
    cin >> n;
    cout << endl;

    print(n);

    return 0;
}