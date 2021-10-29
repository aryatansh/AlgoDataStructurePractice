//Recursive with DP
int uniquePathsRec(int i, int j, int m, int n, int **arr)
{
    if (i == m && j == n)
    {
        return 1;
    }
    if (i > m || j > n)
    {
        return 0;
    }
    if (arr[i - 1][j - 1] != -1)
    {
        return arr[i - 1][j - 1];
    }
    return arr[i - 1][j - 1] = uniquePathsRec(i + 1, j, m, n, arr) + uniquePathsRec(i, j + 1, m, n, arr);
}
int uniquePaths(int m, int n)
{
    int **arr = new int *[m + 1];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n + 1];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = -1;
        }
    }

    return uniquePathsRec(1, 1, m, n, arr);
}

//Iterative Approach
int uniquePaths(int m, int n)
{

    int **arr = new int *[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        arr[i] = new int[n + 1];
        for (int j = 0; j < n + 1; j++)
        {
            if (i == (m - 1) || j == (n - 1))
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = -1;
            }
        }
    }
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if ((i == m - 1) || (j == n - 1))
            {
                continue;
            }
            else
            {
                arr[i][j] = arr[i + 1][j] + arr[i][j + 1];
            }
        }
    }

    return arr[0][0];
}