#include <iostream>

using namespace std;

int min_coins_top_down(int n, int coins[], int T, int dp[])
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int ans = INT_MAX;
    for (int i = 0; i < T; i++)
    {
        if (n - coins[i] >= 0)
        {
            int subprob = min_coins_top_down(n - coins[i], coins, T, dp);
            ans = min(ans, subprob + 1);
        }
    }
    dp[n] = ans;
    return dp[n];
}

int min_coins_bottom_up(int N, int coins[], int T, int dp[])
{
    int dp[100] = {0};
    for (int n = 1; n < N; n++)
    {
        dp[i] = INT_MAX;
        for (int i = 0; i < T; i++)
        {
            if (n - coins[i] >= 0)
            {
                int subprob = dp[n - coins[i]];
                dp[i] = min(dp[i], subprob + 1);
            }
        }
    }
    return dp[N];
}
int main()
{
    int N = 15;
    int coins[] = {1, 7, 10};
    int dp[100] = {0};
    int t = sizeof(coins) / sizeof(int);
    cout << min_coins_top_down(N, coins, t, dp);
    return 0;
}