#include <iostream>

using namespace std;

//Rotate anticlockwise
void rotate_anti_clockwise(int a[1000][1000], int m)
{
    int start_index = 0;
    int end_index = m - 1;
    for (int i = 0; i < m; i++)
    {
        while (start_index < end_index)
        {
            swap(a[i][start_index], a[i][end_index]);
            start_index++;
            end_index--;
        }
        start_index = 0;
        end_index = m - 1;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

void rotate_clockwise(int a[1000][1000], int m)
{
    int start_index = 0;
    int end_index = m - 1;
    for (int i = 0; i < m; i++)
    {
        while (start_index < end_index)
        {
            swap(a[start_index][i], a[end_index][i]);
            start_index++;
            end_index--;
        }
        start_index = 0;
        end_index = m - 1;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}
int main()
{
    int m, n = 0;
    cin >> m;
    int arr[1000][1000];
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = k;
            k++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;
    rotate_clockwise(arr, m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}