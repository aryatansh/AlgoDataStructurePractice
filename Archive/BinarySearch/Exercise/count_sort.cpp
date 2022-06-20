// You are given an array, A. Sort this array using counting sort algorithm.

// Input Format
// First line contains a single integer, n, denoting the size of the array. Next line contains n integers, denoting the elements of the array.

// Constraints
// 1<=N<=10^6 0<=Ai<=10^6

// Output Format
// Print the array in sorted order.

// Sample Input
// 5
// 1 3 2 6 5
// Sample Output
// 1 2 3 5 6

#include <iostream>
#include <algorithm>
using namespace std;
void display(int *array, int size)
{
    for (int i = 1; i <= size; i++)
        cout << array[i] << " ";
    cout << endl;
}
int getMax(int array[], int size)
{
    int max = array[1];
    for (int i = 2; i <= size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}
void countSort(int *array, int size)
{
    int output[size + 1];
    int max = getMax(array, size);
    int count[max + 1];
    for (int i = 0; i <= max; i++)
        count[i] = 0;
    for (int i = 1; i <= size; i++)
        count[array[i]]++;
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];
    for (int i = size; i >= 1; i--)
    {
        output[count[array[i]]] = array[i];
        count[array[i]] -= 1;
    }
    for (int i = 1; i <= size; i++)
    {
        array[i] = output[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    countSort(arr, n);
    display(arr, n);
}