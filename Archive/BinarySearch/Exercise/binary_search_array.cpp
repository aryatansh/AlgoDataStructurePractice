// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input a number M. Write a function which returns the index on which M is found in the array, in case M is not found -1 is returned. Print the value returned.You can assume that the array is sorted, but you’ve to optimize the finding process. For an array of size 1024, you can make 10 comparisons at maximum.

// 1.It reads a number N.
// 2.Take Another N numbers as input in Ascending Order and store them in an Array.
// 3.Take Another number M as input and find that number in Array.
// 4.If the number M is found, index of M is returned else -1 is returned.Print the number returned.

// Input Format
// Constraints
// N cannot be Negative. Range of Numbers N and M can be between -1000000000 to 1000000000

// Output Format
// Sample Input
// 5
// 3
// 5
// 6
// 9
// 78
// 6
// Sample Output
// 2
// Explanation
// Array = {3, 5, 6, 9, 78}, target number = 6 . Index of number 6 in the given array = 2. Write Binary search to find the number in given array as discuss in the class.

#include <iostream>
#include <algorithm>
using namespace std;

int binary_search_without_stl(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int binary_search_with_stl(int *arr, int n, int key)
{
    bool isPresent = binary_search(arr, arr + n, key);
    if (isPresent)
    {
        int *it = lower_bound(arr, arr + n, key);
        return it - arr;
    }
    else
    {
        return -1;
    }
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
    int key = 0;
    cin >> key;
    cout << binary_search_with_stl(arr, n, key);

    return 0;
}