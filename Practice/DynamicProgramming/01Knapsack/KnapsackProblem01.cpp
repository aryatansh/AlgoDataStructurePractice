#include <iostream>
#include <vector>
using namespace std;
//DP with Recursion
int solveRec(vector<int> &A, vector<int> &B, int C, int i, int **cache)
{
    if (i == 0 || C == 0)
    {
        return 0;
    }
    if (cache[i][C] != -1)
    {
        return cache[i][C];
    }
    int inc = 0;
    int exc = 0;
    if (B[i - 1] <= C)
    {
        inc = A[i - 1] + solveRec(A, B, C - B[i - 1], i - 1, cache);
    }
    exc = solveRec(A, B, C, i - 1, cache);
    return cache[i][C] = max(exc, inc);
}

//DP Iterative
int solveIteratively(vector<int> &A, vector<int> &B, C)
{
    int **cache = new int *[A.size() + 1];
    for (int i = 0; i <= A.size(); i++)
    {
        cache[i] = new int[C + 1];
        for (int j = 0; j <= C; j++)
        {
            if (i == 0 || j == 0)
            {
                cache[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= A.size(); i++)
    {
        for (int j = 1; j <= C; j++)
        {
            int inc = 0;
            int exc = 0;
            if (B[i - 1] <= j)
            {777
                inc = A[i - 1] + cache[i - 1][j - B[i - 1]];
            }
            exc = cache[i - 1][j];
            cache[i][j] = max(inc, exc);
        }
    }

    return cache[A.size()][C];
}
int Solution::solve(vector<int> &A, vector<int> &B, int C)
{
    int **cache = new int *[A.size() + 1];
    for (int i = 0; i <= A.size(); i++)
    {
        cache[i] = new int[C + 1];
        for (int j = 0; j <= C; j++)
        {
            cache[i][j] = -1;
        }
    }
    return solveRec(A, B, C, A.size(), cache);
}
