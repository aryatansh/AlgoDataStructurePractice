// You will be given an array containing only 0s, 1s and 2s. you have sort the array in linear time that is O(N) where N is the size of the array.

// Input Format
// The first line contains N, which is the size of the array. The following N lines contain either 0, or 1, or 2.

// Constraints
// 1 <= N <= 10^6
// Each input element x, such that x ∈ { 0, 1, 2 }.

// Output Format
// Output the sorted array with each element separated by a newline.

// Sample Input
// 5
// 0
// 1
// 2
// 1
// 2
// Sample Output
// 0
// 1
// 1
// 2
// 2

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a0 = 0;
    int a1 = 0;
    int a2 = 0;
    int n = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        cin >> k;
        if (k == 0)
        {
            a0++;
        }
        if (k == 1)
        {
            a1++;
        }
        if (k == 2)
        {
            a2++;
        }
    }
    for (int i = 0; i < a0; i++)
    {
        a[i] = 0;
    }
    for (int i = a0; i < a1; i++)
    {
        a[i] = 1;
    }
    for (int i = a1; i < a2; i++)
    {
        a[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}