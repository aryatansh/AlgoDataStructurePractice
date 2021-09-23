#include <iostream>

using namespace std;

// n->n/3,n/2,n-1

int min_steps_to_one_bottom_up(int n)
{
    int dp[100] = 0;
    dp[1] = 0;
    for (int i = 2; i < = n; i++)
    {
        int op1, op2, op3;
        op1 = op2 = op3 = INT_MAX;
        if (n % 3 == 0)
        {
            op1 = dp[i / 3];
        }
        if (n % 2 == 0)
        {
            op2 = dp[i / 2]
        }
        op3 = dp[i - 1];
        dp[i] = min_steps_to_one_bottom_up(min(min(op1, op2), op3)) + 1;
        return dp[n];

        /* code */
    }
}
int min_steps_to_one_top_down(int n, int dp[])
{
    if (n == 1)
    {
        return 0;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;
    if (n % 3 == 0)
    {
        op1 = min_steps_to_one_top_down(n / 3, dp);
    }
    if (n % 2 == 0)
    {
        op2 = min_steps_to_one_top_down(n / 2, dp);
    }
    op3 = min_steps_to_one_top_down(n - 1, dp);

    int ans = min(min(op1, op2), op3) + 1;
    return dp[n] = ans;
}
int main()
{
    int x;
    cin >> x;
    int dp[100] = {0};
    min_steps_to_one_top_down(x, dp);
    return 0;
}