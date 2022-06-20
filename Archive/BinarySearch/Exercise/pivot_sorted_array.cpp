// You are given a sorted but rotated array. You need to fine the index of the pivot element of the array where pivot is that element in the array which is greater than its next element and divides the array into two monotonically increasing halves.

// Input Format
// The first line denotes N - the size of the array. The following N lines each denote the numbers in the array.

// Constraints
// Output Format
// Output the index of the pivot of the array.

// Sample Input
// 5
// 4
// 5
// 1
// 2
// 3
// Sample Output
// 1
// Explanation
// Here, 5 is the pivot element. Thus the output is 1 which is 5's index.

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
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            cout << mid - 1 << endl;
            return 0;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            cout << mid << endl;
            return 0;
        }
        else if (arr[mid] >= arr[s])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        cout << " s " << s << " e " << e << endl;
    }

    return 0;
}