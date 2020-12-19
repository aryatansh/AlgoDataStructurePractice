// You are provided n numbers of array. You need to find the maximum length of bitonic subarray. A subarray A[i … j] is biotonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j] i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.

// Input Format
// First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of array and next line contains n space separated integers.

// Constraints
// 1<=t<=100 1<=n<=1000000

// Output Format
// Print the maximum length.

// Sample Input
// 2
// 6
// 12 4 78 90 45 23
// 4
// 40 30 20 10
// Sample Output
// 5
// 4
// Explanation
// ForMaximum length = 4, 78, 90, 45, 23

#include <iostream>

using namespace std;

int bitonic(int arr[], int n)
{
    int inc[n];
    int dec[n];
    int maxdata = 0;
    inc[0] = 1;
    dec[n - 1] = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        inc[i] = (arr[i - 1] < arr[i]) ? (inc[i - 1] + 1) : 1;
    }
    for (int j = n - 2; j >= 0; j--)
    {
        dec[j] = (arr[j] > arr[j + 1]) ? (dec[j + 1] + 1) : 1;
    }
    maxdata = inc[0] + dec[0] - 1;
    for (int i = 1; i < n; i++)
    {
        if ((inc[i] + dec[i] - 1) > maxdata)
        {
            maxdata = inc[i] + dec[i] - 1;
        }
    }

    return maxdata;
}
int main()
{
    int count_test_cases = 0;
    cin >> count_test_cases;
    for (int i = 0; i < count_test_cases; i++)
    {
        int x = 0;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        cout << bitonic(arr, x) << endl;
    }

    return 0;
}