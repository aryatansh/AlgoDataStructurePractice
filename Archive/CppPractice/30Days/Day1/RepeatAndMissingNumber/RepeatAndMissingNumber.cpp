#include <iostream>
#include <algorithm>
using namespace std;

public void FRMNSorting(int *arr, int n)
{
    sort(arr, arr + n);
    if (arr[0] != 1)
    {
        cout << "Missing Number:" + 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "Missing Number: " + (i + 1);
        }
        if (arr[i] == arr[i - 1])
        {
            cout << "Repeating Number: " + arr[i];
        }
    }
}

int main()
{
    int arr[] = {7, 3, 4, 5, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    FRMNSorting(arr, n);
}