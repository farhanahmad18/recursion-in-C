#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    // Base case - already sorted array
    if (n <= 1)
        return;

    // Processing - it put the largest element at the end
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    // Recursive call
    bubbleSort(arr, n - 1);
}

int main()
{

    int arr[5] = {9, 5, 9, 8, 6};

    bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}