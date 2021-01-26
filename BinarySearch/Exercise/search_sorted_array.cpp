// Rahul had a sorted array of numbers from which he had to find a given number quickly. His friend by mistake rotated the array. Now Rahul doesn't have time to sort the elements again. Help him to quickly find the given number from the rotated array.

// Hint - Think Binary Search!

// Input Format
// The first line contains N - the size of the array. the next N lines contain the numbers of the array.The next line contains the item to be searched.

// Constraints
// Output Format
// Output the index of number in the array to be searched. Output -1 if the number is not found.

// Sample Input
// 5
// 4
// 5
// 1
// 2
// 3
// 2
// Sample Output
// 3
// Explanation
// The given rotated array is [4, 5, 1, 2, 3]. The element to be searched is 2 whose index is 3.

#include <iostream>

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
    int key = 0;
    cin >> key;

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] >= arr[s])
        {
            if (arr[mid] >= key && arr[s] <= key)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= key && arr[e] >= key)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    cout << "-1";
    return 0;
}
