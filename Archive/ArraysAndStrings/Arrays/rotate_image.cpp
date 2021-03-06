// Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

// Input Format
// First line contains a single integer N. Next N lines contain N space separated integers.

// Constraints
// N < 1000

// Output Format
// Print N lines with N space separated integers of the rotated array.

// Sample Input
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// Sample Output
// 4 8 12 16
// 3 7 11 15
// 2 6 10 14
// 1 5 9 13
// Explanation
// Rotate the array 90 degrees anticlockwise.

#include <iostream>

using namespace std;

void rotate_anticlockwise(int **arr, int n)
{
    int revarr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            revarr[j][i] = arr[i][n - 1 - j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << revarr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int count = 0;
    cin >> count;
    int **arr;
    arr = new int *[count];
    for (int i = 0; i < count; i++)
    {
        arr[i] = new int[count];
        for (int j = 0; j < count; j++)
        {
            cin >> arr[i][j];
        }
    }
    rotate_anticlockwise(arr, count);

    return 0;
}