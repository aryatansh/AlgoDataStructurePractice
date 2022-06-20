// Find position of the last and first occurrence of a given number in a sorted array. If number does not exist then print lower and upper bound as -1.

// Input Format
// First line contains an integer n denoting the size of the array.
// Second line contains n space separated integers denoting array elements.
// Third line contains single integer Q denoting the no of queries.
// Q lines follow , each containing a single integer x that is to be searched in the array.

// Constraints
// 1 <= N <= 10^5
// 1 <= Q <= 100

// Output Format
// For each query , print the lowerbound and the upperbound for the number x in a new line each.

// Sample Input
// 5
// 1 2 3 3 4
// 3
// 2
// 3
// 10
// Sample Output
// 1 1
// 2 3
// -1 -1
// Explanation
// The first and the last occurrence of 2 in the given array are both 1.
// The first occurrence of 3 is at index=2 and last at index=3.
// 10 is not present in the array so we print -1 for it.

#include <iostream>

using namespace std;

int lower_bound(int *arr, int n, int k)
{
    int ans = -1;
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int upper_bound(int *arr, int n, int k)
{
    int ans = -1;
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    cin >> k;
    for (int j = 0; j < k; j++)
    {
        int l = 0;
        cin >> l;
        cout << lower_bound(arr, n, l) << " " << upper_bound(arr, n, l) << endl;
    }

    return 0;
}