class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {
        vector<vector<int>> cache(coins.size() + 1, vector<int>(amount + 1, 0));
        for (int j = 0; j <= n; j++)
        {
            cache[j][0] = 1;
        }
        for (int i = 1; i <= coins.size(); i++)
        {
            for (int j = 1; j <= amount; j++)
            {
                int inc = 0;
                int exc = 0;
                if (coins[i - 1] <= j)
                {
                    inc = cache[i][j - coins[i - 1]];
                }
                exc = cache[i - 1][j];
                cache[i][j] = inc + exc;
            }
        }
        return cache[coins.size()][amount];
    }
};