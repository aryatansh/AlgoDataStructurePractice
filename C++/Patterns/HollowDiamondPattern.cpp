// Take N (number of rows), print the following pattern (for N = 5).

//      * * * * *
//      * *   * *
//      *       *
//      * *   * *
//      * * * * *
// Input Format
// Constraints
// 0 < N < 10 (where N is an odd number)

// Output Format
// Sample Input
// 5
// Sample Output
// *	*	*       *      *
// *	*	        *      *
// * 	                       *
// * 	*               *      *
// * 	*	*       *      *
// Explanation
// Each '*' is separated from other by a tab.

#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cin >> x;
    int n = (x / 2) + 1;
    int k = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= n - k; j++)
        {
            cout << "*	";
        }
        for (int l = 1; l <= k; l++)
        {
            cout << " 	";
        }
        for (int l = 2; l <= k; l++)
        {
            cout << " 	";
        }

        for (int j = n + k + 1; j <= x; j++)
        {
            cout << "*	";
        }
        if (i != 1 && i != x)
        {
            cout << "*";
        }
        if (i <= n - 1)
        {
            k++;
        }
        else
        {

            k--;
        }
        cout << endl;
    }

    return 0;
}