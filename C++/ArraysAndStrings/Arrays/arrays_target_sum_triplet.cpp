// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all triplets of numbers which sum to target.

// Input Format
// First line contains input N.
// Next line contains N space separated integers denoting the elements of the array.
// The third line contains a single integer T denoting the target element.

// Constraints
// Length of Array should be between 1 and 1000.

// Output Format
// Print all the triplet present in the array in a new line each. The triplets must be printed as A, B and C where A,B and C are the elements of the triplet ( A<=B<=C) and all triplets must be printed in sorted order. Print only unique triplets.

// Sample Input
// 9
// 5 7 9 1 2 4 6 8 3
// 10
// Sample Output
// 1, 2 and 7
// 1, 3 and 6
// 1, 4 and 5
// 2, 3 and 5
// Explanation
// Array = {5, 7, 9, 1, 2, 4, 6 ,8 ,3}. Target number = 10. Find any three number in the given array which sum to target number.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int target = 0;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    if (arr[i] > arr[j] && arr[i] > arr[k])
                    {
                        if (arr[j] > arr[k])
                        {
                            cout << arr[k] << ", " << arr[j] << " and " << arr[i] << endl;
                        }
                        else
                        {
                            cout << arr[j] << ", " << arr[k] << " and " << arr[i] << endl;
                        }
                    }
                    if (arr[j] > arr[k] && arr[j] > arr[i])
                    {
                        if (arr[i] > arr[k])
                        {
                            cout << arr[k] << ", " << arr[i] << " and " << arr[j] << endl;
                        }
                        else
                        {
                            cout << arr[i] << ", " << arr[k] << " and " << arr[j] << endl;
                        }
                    }
                    else
                    {
                        if (arr[i] > arr[j])
                        {
                            cout << arr[j] << ", " << arr[i] << " and " << arr[k] << endl;
                        }
                        else
                        {
                            cout << arr[i] << ", " << arr[j] << " and " << arr[k] << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}