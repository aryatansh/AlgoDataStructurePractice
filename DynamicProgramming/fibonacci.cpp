#include <iostream>

using namespace std;
int fib_rec(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fib_rec(n - 1) + fib_rec(n - 2);
}

int fib_rec_dp_top_down(int n, int *dp)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int ans = fib_rec_dp_top_down(n - 1, dp) + fib_rec_dp_top_down(n - 2, dp);
    dp[n] = ans;
    return dp[n];
}
int fib_rec_dp_bottom_up(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int a = 0;
    int b = 1;
    int c = 1;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main()
{
    cout << fib_rec_dp_bottom_up(1) << endl;
    cout << fib_rec_dp_bottom_up(2) << endl;
    cout << fib_rec_dp_bottom_up(3) << endl;
    cout << fib_rec_dp_bottom_up(4) << endl;
    cout << fib_rec_dp_bottom_up(5) << endl;
    cout << fib_rec_dp_bottom_up(6) << endl;

    return 0;
}