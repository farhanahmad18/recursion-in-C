// Merge sort is the fastest sorting algorithm

#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s+e)/2;

    //Finding the length or size of both the sorted array
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creating memories for array
    int *first = new int[len1];
    int *second = new int[len2];

    //copy value to array
    int mainArrayIndex = s;
    for ( int i=0; i<len1; i++ ) {
        first[i] = arr[mainArrayIndex++];
    }  
    
    mainArrayIndex = mid+1;
    for ( int i=0; i<len2; i++ ) {
        second[i] = arr[mainArrayIndex++];
    }    

    //merge 2 sorted array algorithm
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if( first[index1] < second[index2] ) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }
    
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e)
{

    // Base Case
    if (s >= e)
        return;
        
    // Find the middle point to divide the array into two halves
    int mid = (s+e)/2;

    // Solve Left Part
    mergeSort(arr, s, mid);

    // Solve Right Part
    mergeSort(arr, mid + 1, e);

    // Merge both sorted Array
    merge(arr, s, e);
}

int main()
{

    int arr[15] = {5, 6, 2, 3, 8, 4, 9, 5, 22, 44, 85, 78, 96, 51, 25};
    int n = 15;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
