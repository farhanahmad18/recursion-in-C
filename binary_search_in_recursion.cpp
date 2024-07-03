#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

bool binarySearch(int arr[], int s, int e, int k)
{
    print(arr, s, e);
    // Base case

    // Element not found
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    cout << "Value of arr mid is : " << mid << endl;
    // Element found
    if (arr[mid] == k)
        return true;

    // Recursive Call
    if (arr[mid] < k)
        return binarySearch(arr, mid + 1, e, k);
    else
        return binarySearch(arr, s, mid - 1, k);
}

int main()
{
    int arr[10] = {2, 4, 6, 10, 12, 14, 16, 35, 256, 260};
    int key = 260;
    cout << "Key to find is : " << key << endl
         << endl;
    bool ans = binarySearch(arr, 0, 9, key);

    if (ans)
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;

    return 0;
}