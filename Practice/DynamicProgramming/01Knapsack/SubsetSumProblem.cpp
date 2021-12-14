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
    fo int **arr = new int *[A.size() + 1];
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
// int solveIteratively(vector<int> &A, int B, int i)
// {
// }

int solveRec(vector<int> &A, int B, int i, int **arr)
{
    if (B == 0)
    {
        return arr[i][B] = 1;
    }
    if (i >= A.size() || B < 0)
    {
        return 0;
    }
    if (arr[i][B] != -1)
    {
        return arr[i][B];
    }

    int inc = solveRec(A, B - A[i], i + 1, arr);
    int exc = solveRec(A, B, i + 1, arr);
    arr[i][B] = max(inc, exc);
    return arr[i][B];
}
int main()
{

    int B = 3;
    vector<int> A;
    A.insert(A.end(), {1, 1, 1});
    for (auto v : A)
        cout << v << ",";
    cout << endl;
    int **arr = new int *[A.size() + 1];
    for (int i = 0; i < A.size() + 1; i++)
    {
        arr[i] = new int[B + 1];
        for (int j = 0; j < B + 1; j++)
        {
            if (i == 0)
            {
                arr[i][j] = 0;
            }
            if (j == 0)
            {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < (A.size() + 1); i++)
    {
        for (int j = 0; j < B + 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < A.size() + 1; i++)
    {
        for (int j = 1; j < B + 1; j++)
        {
            if (A[i - 1] <= j)
            {
                cout << "called:" << i << " " << j << " ";
                int k = arr[i - 1][j - A[i - 1]];
                cout << k << " " << arr[i - 1][j] << endl;
                arr[i][j] = max(arr[i - 1][j - A[i - 1]], arr[i - 1][j]);
            }
            else
            {
                arr[i][j] = arr[i - 1][j];
            }
        }
    }
    cout << endl;
    for (int i = 0; i < A.size() + 1; i++)
    {
        for (int j = 0; j < B + 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << arr[A.size()][B];
    return 0;
}
