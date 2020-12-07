#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    //Rotate function rotate the array from middle location specified in the array
    rotate(arr, arr + 2, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int a[] = {1, 2, 3, 4, 5};
    cout << endl;
    next_permutation(a, a + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}