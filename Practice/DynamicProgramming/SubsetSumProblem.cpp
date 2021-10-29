#include <iostream>
#include <vector>
using namespace std;

//Recursion with DP
int solveRecursive(vector<int> &A, int B, int i, int **arr)
{
    if (B == 0)
    {
        return arr[i][B] = 1;
    }
    if (B < 0)
    {
        return 0;
    }
    if (i >= A.size())
    {
        return 0;
    }
    if (arr[i][B] != -1)
    {
        return arr[i][B];
    }
    int inc = solveRecursive(A, B - A[i], i + 1, arr);
    int exc = solveRecursive(A, B, i + 1, arr);
    if (inc == 1 || exc == 1)
    {
        return arr[i][B] = 1;
    }
    return arr[i][B] = 0;
}
int solve(vector<int> &A, int B)
{
    int **arr = new int *[A.size() + 1];
    for (int i = 0; i < A.size() + 1; i++)
    {
        arr[i] = new int[B + 1];
        for (int j = 0; j < (B + 1); j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
            }
            arr[i][j] = -1;
        }
    }
    return solveRecursive(A, B, 0, arr);
}

//Iterative with Dp

int solveIterative(vector<int> &A, int B)
{
    int **arr = new int *[A.size() + 1];
    for (int i = 0; i < A.size() + 1; i++)
    {
        arr[i] = new int[B + 1];
        for (int j = 0; j < (B + 1); j++)
        {
            if (i == 0)
            {
                A[i][j] = 0;
            }
            if (j == 0)
            {
                A[i][j] = 1;
            }
        }
    }
    for (int i = 1; i < A.size() + 1; i++)
    {
        for (int j = 1; j < (B + 1); j++)
        {
            if (A[i - 1] <= B)
            {
                arr[i][j]==max(arr[i-1][j],arr[i][j-arr[i]];
            }
            else
            {
                arr[i][j] = arr[i - 1][j];
            }
        }
    }

    return arr[A.size()][B];
}
int main()
{
    int K = 2191;
    vector<int> w;
    w.insert(w.end(), {68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74, 65, 42, 12, 54, 69, 48, 45, 63, 58, 38, 60, 24, 42, 30, 79, 17, 36});

    cout << solve(w, K, arr);
    return 0;
}