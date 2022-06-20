// Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

// Input Format
// Single integer N.

// Constraints
// N <= 20

// Output Format
// Print pattern.

// Sample Input
// 5
// Sample Output
//     *****
//    *   *
//   *   *
//  *   *
// *****
// Explanation
// For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.

#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cin >> x;

    int space_count = x - 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= space_count; j++)
        {
            cout << " ";
        }
        space_count--;
        for (int j = 1; j <= x; j++)
        {
            if (i == 1 || i == x)
            {
                cout << "*";
            }
            else
            {
                if (j == 1 || j == x)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}