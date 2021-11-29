#include <iostream>
#include <vector>
using namespace std;
//DP with Recursion
int solveRecursive(vector<int> &A, vector<int> &B, int C, int n, int **arr)
{
    if (C == 0 || n == 0)
    {
        return arr[n][C] = 0;
    }
    int inc = 0;
    int exc = 0;
    if (arr[n][C] != -1)
    {
        return arr[n][C];
    }
    if (B[n - 1] <= C)
    {
        inc = A[n - 1] + solveRecursive(A, B, C - B[n - 1], n - 1, arr);
    }
    exc = solveRecursive(A, B, C, n - 1, arr);
    return arr[n][C] = max(inc, exc);
}

int solve(vector<int> &A, vector<int> &B, int C)
{
    int **arr = new int *[A.size() + 1];
    for (int i = 0; i < A.size() + 1; i++)
    {
        arr[i] = new int[C + 1];
        for (int j = 0; j < (C + 1); j++)
        {
            arr[i][j] = -1;
        }
    }
    return solveRecursive(A, B, C, A.size(), arr);
}

//Iteration -Bottom UP Dp
int solveIteratively(vector<int> &A, vector<int> &B, int C)
{
    int **arr = new int *[A.size() + 1];
    for (int i = 0; i < A.size() + 1; i++)
    {
        arr[i] = new int[C + 1];
        for (int j = 0; j < (C + 1); j++)
        {
            if (i == 0 || j == 0)
            {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < A.size() + 1; i++)
    {
        for (int j = 1; j < C + 1; j++)
        {
            if (B[i - 1] <= j)
            {
                arr[i][j] = max(arr[i - 1][j], A[i - 1] + arr[i - 1][j - B[i - 1]]);
            }
            else
            {
                arr[i][j] = arr[i - 1][j];
            }
        }
    }
    return arr[A.size()][C];
}
int main()
{
    int K = 645;
    vector<int> w;
    w.insert(w.end(), {895, 704, 812, 323, 334, 674});
    vector<int> v;
    v.insert(v.end(), {65, 42, 12, 54, 69, 48});

    cout << solve(w, v, K);

    return 0;
}
