// Worst Case Complexity: O(n2)
// Best Case Complexity: O(n)
// Average Case Complexity: O(n2)
// Space complexity is O(1) because an extra variable key is used.
#include <iostream>

using namespace std;
void insertion_sort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int e = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > e)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = e;
    }
}

int main()
{
    int arr[] = {5, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}