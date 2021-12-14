#include <iostream>
using namespace std;

bool IsPathPresent(char maze[][10], int i, int j, int m, int n)
{
    if (i == m && j == n)
    {
        return true;
    }
    if (i > m || j >> n)
    {
        return false;
    }
    if (maze[i][j] == 'X')
    {
        return false;
    }

    bool left = IsPathPresent(maze, i, j + 1, m, n);
    bool bottom = IsPathPresent(maze, i + 1, j, m, n);

    return left || bottom;
}

bool PrintAllPaths(char maze[][10], int sol[][10], int i, int j, int m, int n)
{
    if (i == m && j == n)
    {
        sol[i][j] = 1;
        for (int k = 0; k <= m; k++)
        {
            for (int l = 0; l <= n; l++)
            {
                cout << " " << sol[k][l] << " ";
            }
            cout << endl;
        }
        cout << endl
             << endl;
        sol[i][j] = 0;

        return true;
    }
    if (i > m || j > n)
    {
        return false;
    }
    if (maze[i][j] == 'X')
    {
        return false;
    }
    sol[i][j] = 1;

    bool left = PrintAllPaths(maze, sol, i, j + 1, m, n);
    bool bottom = PrintAllPaths(maze, sol, i + 1, j, m, n);
    sol[i][j] = 0;
    return left || bottom;
}
int main()
{
    char maze[10][10] = {"0000",
                         "0000",
                         "000X",
                         "0X00"};
    int sol[10][10] = {0};

    cout << endl
         << IsPathPresent(maze, 0, 0, 3, 3);

    cout << endl
         << PrintAllPaths(maze, sol, 0, 0, 3, 3);

    for (int k = 0; k <= 3; k++)
    {
        for (int l = 0; l <= 3; l++)
        {
            cout << " " << sol[k][l] << " ";
        }
        cout << endl;
    }
    return 0;
}