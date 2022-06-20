
// Sample Input
// 5
// Sample Output
// 5                   5
// 5 4               4 5
// 5 4 3           3 4 5
// 5 4 3 2       2 3 4 5
// 5 4 3 2 1   1 2 3 4 5
// 5 4 3 2 1 0 1 2 3 4 5
// 5 4 3 2 1   1 2 3 4 5
// 5 4 3 2       2 3 4 5
// 5 4 3           3 4 5
// 5 4               4 5
// 5                   5

#include <iostream>

using namespace std;
int main()
{
    int input = 0;
    cin >> input;
    int x = input;
    int y = input;
    int space = (2 * input) - 1;
    for (int i = 1; i <= (2 * input) + 1; i++)
    {
        for (int j = input; j >= x; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }

        for (int j = y; j <= input; j++)
        {
            cout << j << " ";
        }
        if (i <= input)
        {
            x--;
            if (y == 1)
            {
            }
            else
            {
                y--;
            }
            if (space == 1)
            {
                space--;
            }
            else
            {
                space = space - 2;
            }
        }
        else
        {
            x++;
            if (y == 1 && i == input + 1)
            {
            }
            else
            {
                y++;
            }
            if (space == 0)
            {
                space++;
            }
            else
            {
                space = space + 2;
            }
        }
        cout << endl;
    }
    return 0;
}