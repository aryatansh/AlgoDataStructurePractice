#include <iostream>

using namespace std;
int main()
{
    int arr[3][4] = {
        {1, 4, 7, 10},
        {2, 5, 8, 11},
        {3, 6, 9, 12}};

    int row = 3;
    int col = 4;

    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }

    return 0;
}