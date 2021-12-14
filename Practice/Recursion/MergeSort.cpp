#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int s, int mid, int e)
{
    int i = s;
    int j = mid + 1;
    int k = s;

    int temp[a.size()];
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

void mergeSort(vector<int> &a, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(a, 0, mid);
    mergeSort(a, mid + 1, e);
    merge(a, s, mid, e);
}

int main()
{
    vector<int> a = {5, 4, 3, 2, 1};
    mergeSort(a, 0, a.size() - 1);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}