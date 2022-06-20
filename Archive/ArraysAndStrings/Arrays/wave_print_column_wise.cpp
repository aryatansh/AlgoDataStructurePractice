// Take as input a two-d array. Wave print it column-wise.

// Input Format
// Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

// Constraints
// Both M and N are between 1 to 10.

// Output Format
// All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).

// Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END

#include <iostream>

using namespace std;

int main()
{
    int x, y = 0;
    cin >> x >> y;
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }

    int j = 0;
    int i = 0;
    bool down = true;
    while (i < x && j < y)
    {

        std::cout << arr[i][j] << ", ";

        if (i == 0 && down == false)
        {
            down = true;
            j++;
            continue;
        }
        if (i == x - 1 && down == true)
        {
            down = false;
            j++;
            continue;
        }
        if (down == true)
        {

            i++;
        }
        else
        {
            i--;
        }
    }

    std::cout << "END";

    return 0;
}