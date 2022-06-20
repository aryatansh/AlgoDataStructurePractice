// This algorithm is used to search a 2D array in N+M time
#include <iostream>
using namespace std;

void staircase_search(int a[1000][1000], int m, int n, int key)
{
    //Col index
    int j = n - 1;
    //Row index
    int i = 0;
    while (i < m)
    {

        if (a[i][j] > key)
        {
            if (j > 0)
            {
                j = j - 1;
            }
            else
            {
                break;
            }
        }
        else if (a[i][j] < key)
        {
            i = i + 1;
        }
        else
        {
            cout << "Present at row: " << i << " Column: " << j;
            return;
        }
    }
    cout << "Key not found";
}

int main()
{
    int m, n = 4;

    int arr[1000][1000] = {{1, 4, 8, 10},
                           {2, 5, 9, 15},
                           {6, 16, 18, 20},
                           {11, 17, 19, 23}};

    staircase_search(arr, 4, 4, 17);
    return 0;
}