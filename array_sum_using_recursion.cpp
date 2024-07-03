#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int size)
{ // Base Case
    if (size == 0)
        return 0;

    if (size == 1)
        return arr[0];
    // Recursive Call
    return arr[0] + getSum(arr + 1, size - 1);
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;

    int sum = getSum(arr, size);
    cout << "Sum of all elements in the array: " << sum << endl;
    return 0;
}
