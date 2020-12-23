// Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

// Input Format
// Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

// Constraints
// Both M and N are between 1 to 10.

// Output Format
// All M * N integers separated by commas with 'END' written in the end(as shown in example).

// Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
// Explanation
// For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .

#include <iostream>

using namespace std;
int main()
{
    int m = 0;
    int n = 0;
    cin >> m >> n;
    int xstart = 0;
    int xend = m - 1;
    int ystart = 0;
    int yend = n - 1;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    while (xstart <= xend && ystart <= yend)
    {
        for (int i = xstart; i <= xend; i++)
        {
            cout << arr[i][ystart] << ", ";
        }
        ystart++;
        for (int i = ystart; i <= yend; i++)
        {
            cout << arr[xend][i] << ", ";
        }
        xend--;
        if (!(ystart > yend))
        {
            for (int i = xend; i >= xstart; i--)
            {
                cout << arr[i][yend] << ", ";
                ;
            }
            yend--;
        }
        if (!(xstart > xend))
        {
            for (int i = yend; i >= ystart; i--)
            {
                cout << arr[xstart][i] << ", ";
            }
            xstart++;
        }
    }
    cout << "END";
    return 0;
}