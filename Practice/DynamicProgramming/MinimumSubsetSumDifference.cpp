#include <iostream>
#include <vector>
using namespace std;

int solveRecursion(vector<int> &A, int s, int i, int **dp)
{
    if (s == 0)
    {
        return dp[i][s] = true;
    }
    if (i >= A.size())
    {
        return 0;
    }
    if (s < 0)
    {
        return 0;
    }
    if (dp[i][s] != -1)
    {
        return dp[i][s];
    }
    int inc = solveRecursion(A, s - A[i], i + 1, dp);
    int exc = solveRecursion(A, s, i + 1, dp);
    if (inc == 1 || exc == 1)
    {
        return dp[i][s] = 1;
    }
    return dp[i][s] = 0;
}

int solve(vector<int> &A)
{
    int B = 0;
    for (int i = 0; i < A.size(); i++)
    {
        B += A[i];
    }
    cout << B << endl;
    int **dp = new int *[A.size() + 1];
    for (int i = 0; i < A.size() + 1; i++)
    {
        dp[i] = new int[B + 1];
        for (int j = 0; j < (B + 1); j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << solveRecursion(A, B, 0, dp) << endl;
    int minimum = INT_MAX;
    for (int i = 0; i < A.size() + 1; i++)
    {
        for (int j = 0; j < (B + 1); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < (B + 1) / 2; j++)
    {
        if (dp[A.size() - 1][B] != -1 && dp[A.size() - 1][B] != 0)
        {
            minimum = min(minimum, (B - (dp[A.size() - 1][B])));
        }
    }
    return minimum;
}

int main()
{
    vector<int> w;
    w.insert(w.end(), {1, 4, 5, 7});
    cout << solve(w);
    return 0;
}