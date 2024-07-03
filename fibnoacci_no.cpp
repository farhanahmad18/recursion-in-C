#include<bits./stdc++.h>
using namespace std;

int fib (int n) {
    //Base case
    if ( n == 0)
        return 0;
        
    if ( n == 1 )
        return 1;

    //Recursive case
    int ans = fib(n-1) + fib(n-2);
    return ans;    
}

int main() {
    int n;
    cin >> n;

    int result = fib(n);

    cout << result << endl;
    return 0;
}