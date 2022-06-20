#include <iostream>

using namespace std;

void sumOfSubMatix(int **arr, int row_count, int col_count)
{
    int sum = 0;
    for (int i = 0; i < row_count; i++)
    {
        for (int j = 0; j < col_count; j++)
        {
            sum += arr[i][j] * (((i + 1) * (j + 1)) * ((row_count - i) * (col_count - j)));
        }
    }
    cout << sum;
}

void brute_force(int **arr, int row_count, int col_count)
{

    int sum = 0;

    for (int blx = 0; blx < row_count; blx++)
    {
        for (int bly = 0; bly < col_count; bly++)
        {
            for (int hlx = blx; hlx < row_count; hlx++)
            {
                for (int hly = bly; hly < col_count; hly++)
                {
                    for (int k = blx; k <= hlx; k++)
                    {
                        for (int l = bly; l <= hly; l++)
                        {
                            sum += arr[k][l];
                        }
                    }
                }
            }
        }
    }

    cout << sum;
}
int main()
{
    int row_count = 0;
    int col_count = 0;
    cin >> row_count >> col_count;
    int **arr = new int *[row_count];
    for (int i = 0; i < row_count; i++)
    {
        arr[i] = new int[col_count];
        for (int j = 0; j < col_count; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row_count; i++)
    {
        for (int j = 0; j < col_count; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    brute_force(arr, row_count, col_count);
    cout << endl;
    sumOfSubMatix(arr, row_count, col_count);
    return 0;
}