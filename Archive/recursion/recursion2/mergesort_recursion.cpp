#include <iostream>

using namespace std;

void merge(int *a, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;

    int temp[100];
    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= e)
    {
        temp[k++] = a[j++];
    }

    for (int l = s; l <= e; l++)
    {
        a[l] = temp[l];
    }
}

void mergeSort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    mergeSort(a, s, mid);
    mergeSort(a, mid + 1, e);
    merge(a, s, e);
}

int main()
{

    int arr[] = {3, 4, 1, 5, 6, 2};
    int n = 6;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}