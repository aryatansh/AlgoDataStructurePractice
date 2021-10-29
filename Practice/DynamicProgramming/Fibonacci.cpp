#include <iostream>

using namespace std;
//Recursive
int fibRec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

//Recusive with dp. 2 methods below are used
int fibRec(int n, int *arr)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (arr[n] != -1)
    {
        return arr[n];
    }
    arr[n] = fibRec(n - 1, arr) + fibRec(n - 2, arr);
    return arr[n];
}
int fib(int n)
{
    int *arr = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = -1;
    }
    return fibRec(n, arr);
}

// Bottom Up Approach
int fib(int n)
{
    int *arr = new int[n + 1];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n + 1; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}
