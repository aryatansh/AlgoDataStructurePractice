// We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

// Input Format
// First line contains the input n. Second and Third line contains n space separated integers.

// Constraints
// N < 1000

// Output Format
// Print the median in a single line.

// Sample Input
// 5
// 1 3 5 7 9
// 2 4 6 8 10
// Sample Output
// 5
// Explanation
// Merged Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] So the median element is 5

#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    cin >> count;
    int arr1[count];
    int arr2[count];
    int arr3 = 0;
    int k = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < count; i++)
    {
        cin >> arr2[i];
    }
    int i = 0;
    int j = 0;
    while (k != count)
    {
        if (arr1[i] < arr2[j])
        {
            arr3 = arr1[i];
            i++;
        }
        else
        {
            arr3 = arr2[j];
            j++;
        }
        k++;
    }
    cout << arr3;
    return 0;
}