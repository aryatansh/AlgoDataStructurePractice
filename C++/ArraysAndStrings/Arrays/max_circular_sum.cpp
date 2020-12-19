// You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive numbers.

// Input Format
// First line contains integer t which is number of test case.
// For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.

// Constraints
// 1<=t<=100
// 1<=n<=1000
// |Ai| <= 10000

// Output Format
// Print the maximum circular sum for each testcase in a new line.

// Sample Input
// 1
// 7
// 8 -8 9 -9 10 -11 12
// Sample Output
// 22
// Explanation
// Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)
#include <iostream>

using namespace std;

int best_method(int *arr, int n)
{
    int max_straight_sum = INT_MIN;
    int min_straight_sum = INT_MAX;
    int arr_sum = 0;
    int temp_max = 0;
    int temp_min = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        temp_max += arr[i];
        if (temp_max > max_straight_sum)
        {
            max_straight_sum = temp_max;
        }
        if (temp_max < 0)
        {
            temp_max = 0;
        }
        temp_min += arr[i];

        if (temp_min < min_straight_sum)
        {
            temp_min = min_straight_sum;
        }
        if (temp_min > 0)
        {
            temp_min = 0;
        }
    }
    if (temp_min == arr_sum)
    {
        return max_straight_sum;
    }
    return max(max_straight_sum, (arr_sum - temp_min));
}

int naive_method(int *arr, int n)
{
    int maxdata = 0;
    for (int i = 0; i < n; i++)
    {
        int max_current = INT_MIN;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int k = (i + j) % n;
            sum += arr[k];
            if (sum > max_current)
            {
                max_current = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        maxdata = max(max_current, maxdata);
    }
    return maxdata;
}

int main()
{
    int testcases = 0;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int arrCount = 0;
        cin >> arrCount;
        int arr[arrCount];
        for (int j = 0; j < arrCount; j++)
        {
            cin >> arr[j];
        }
        cout << best_method(arr, arrCount) << endl;
    }

    return 0;
}
