#include<iostream>
using namespace std;

void countSort(int *arr, int n)
{
    int maxi = arr[0];
    int outputArr[n] = {0};

    // Find the maximum element in the array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    // Count the occurrences of each element in the array
    int countArr[maxi + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        countArr[arr[i]]++;
    }

    // Update countArr to store the position of each element in the sorted order
    for (int i = 1; i <= maxi; i++)
    {
        countArr[i] = countArr[i] + countArr[i - 1];
    }

    // Build the sorted array using countArr
    for (int i = n - 1; i >= 0; i--)
    {
        outputArr[--countArr[arr[i]]] = arr[i];
    }

    // Update the original array with the sorted elements
    for (int i = 0; i<n; i++)
    {
        arr[i] = outputArr[i];
    }
}

int main()
{
    int n = 10;
    int arr[n] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    countSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
