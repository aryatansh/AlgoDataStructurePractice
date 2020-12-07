// Take N as input. For a value of N=7, we wish to draw the following pattern :

//                             1
//                         2 1   1 2
//                     3 2 1       1 2 3
//                 4 3 2 1           1 2 3 4
//                     3 2 1       1 2 3
//                         2 1   1 2
//                             1
// Input Format
// Take N as input.

// Constraints
// N is odd number.

// Output Format
// Pattern should be printed with a space between every two values.

// Sample Input
// 7
// Sample Output
//             1
//         2 1   1 2
//     3 2 1       1 2 3
// 4 3 2 1           1 2 3 4
//     3 2 1       1 2 3
//         2 1   1 2
//             1
// Explanation
// Catch the pattern and print it accordingly.

#include <iostream>

using namespace std;

int main()
{
    int row = 0;
    cin >> row;
    int space_count = row - 1;
    int number_count = 1;
    int space_count2 = 0;
    int number_count2 = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= space_count; j++)
        {
            cout << "  ";
        }
        for (int j = number_count; j > 0; j--)
        {
            cout << j << " ";
        }
        if (i <= row / 2)
        {
            number_count++;
            space_count = space_count - 2;
        }
        else
        {
            number_count--;
            space_count = space_count + 2;
        }
        for (int j = 0; j < (2 * space_count2) - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= number_count2; j++)
        {
            if (i == 1 || i == row)
            {
            }
            else
            {
                cout << j << " ";
            }
        }
        if (i <= row / 2)
        {
            number_count2 = number_count2 + 1;
            space_count2 = space_count2 + 1;
        }
        else
        {
            number_count2 = number_count2 - 1;
            space_count2 = space_count2 - 1;
        }
        cout << endl;
    }
    return 0;
}