#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int size)
{
    cout << "Size of array is " << size << endl;
    cout << "Array is: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

bool linearSearch(int *arr, int size, int key)
{
    print(arr, size);
    // base case
    if (size == 0)
        return false;

    // Ek case solve krlo baaki recursion dekh lega
    if (arr[0] == key)
        return true;
    else // Recursive Call
        return linearSearch(arr + 1, size - 1, key);
}

int main()
{

    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 6;
    cout << "Key to Find is " << key << endl;

    bool ans = linearSearch(arr, size, key);

    if (ans)
        cout << "Key is Present in Given Array";
    else
        cout << "Key is Not Present in Given Array";

    return 0;
}