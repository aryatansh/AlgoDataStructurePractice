class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        int n = coins.size();
        vector<vector<int>> cache(n + 1, vector<int>(amount + 1, 0));
        for (int j = 1; j <= amount; j++)
        {
            cache[0][j] = INT_MAX;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= amount; j++)
            {
                int inc = INT_MAX;
                int exc = INT_MAX;
                if (coins[i - 1] <= j)
                {
                    inc = cache[i][j - coins[i - 1]];
                    if (inc != INT_MAX)
                    {
                        inc += 1;
                    }
                }
                exc = cache[i - 1][j];
                cache[i][j] = min(inc, exc);
            }
        }

        return cache[n][amount] > amount ? -1 : cache[n][amount];
    }
};