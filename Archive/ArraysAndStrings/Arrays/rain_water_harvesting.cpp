// Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

// Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

// Explanation for the Sample input Testcase:
// Elevation Map

// So the total units of water she can save is 5 units

// Input Format
// First line contains an integer n. Second line contains n space separated integers representing the elevation map.

// Constraints
// 1 <= N <= 10^6

// Output Format
// Print a single integer containing the maximum unit of waters she can save.

// Sample Input
// 10
// 0 2 1 3 0 1 2 1 2 1
// Sample Output
// 5
// Explanation
// Refer to the image for explanation. Count the number of cells having water in them.

// Cod
#include <iostream>

using namespace std;

int best_method(int *arr, int n)
{
    int water = 0; // To store the final ans

    int left_max = 0;  // Which stores the current max height of the left side
    int right_max = 0; // Which stores the current max height of the right side

    int lo = 0;     // Counter to traverse from the left_side
    int hi = n - 1; // Counter to traverse from the right_side

    while (lo <= hi)
    {

        if (arr[lo] < arr[hi])
        {

            if (arr[lo] > left_max)
            {
                left_max = arr[lo]; // Updating left_max
            }
            else
            {

                water += left_max - arr[lo]; // Calculating the ans
            }
            lo++;
        }
        else
        {

            if (arr[hi] > right_max)
            {
                right_max = arr[hi]; // Updating right_max
            }
            else
            {
                water += right_max - arr[hi]; // Calculating the ans
            }
            hi--;
        }
    }

    return water;
}
int better_method(int *a, int n)
{
    int l[n];
    int r[n];
    int left = 0;
    for (int i = 0; i < n; i++)
    {
        l[i] = max(a[i], left);
        left = l[i];
    }
    int right = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        r[i] = max(a[i], right);
        right = r[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += min(l[i], r[i]) - a[i];
    }
    return sum;
}

int naive_method(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int left_biggest = 0;
        int right_biggest = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] > left_biggest)
            {
                left_biggest = a[j];
            }
        }
        for (int j = i + 1; j < n; j++)
        {

            if (right_biggest < a[j])
            {
                right_biggest = a[j];
            }
        }
        if (left_biggest > a[i] && right_biggest > a[i])
        {
            sum += min(left_biggest, right_biggest) - a[i];
        }
    }
    return sum;
}
int main()
{
    int count = 0;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    int outdata = better_method(arr, count);
    cout << outdata;
    return 0;
}