#include <iostream>
#include <vector>

using namespace std;

void quick_sort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int m = partition(arr, s, e);
    quick_sort(arr, s, m - 1);
    quick_sort(arr, m + 1, e);
}

int main()
{
    vector<int> li = {5, 4, 3, 2, 1};
    quickSort(li, 0, li.size() - 1);
    for (int i = 0; i < li.size(); i++)
    {
        cout << li[i];
    }

    return 0;
}