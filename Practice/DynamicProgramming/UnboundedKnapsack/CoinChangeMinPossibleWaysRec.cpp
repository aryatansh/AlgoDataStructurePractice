class Solution
{
    int coinChangeRec(vector<int> &coins, int amount, int n, vector<vector<int>> &cache)
    {
        if (amount == 0)
        {
            return 0;
        }
        if (n <= 0)
        {
            return INT_MAX;
        }
        if (cache[n][amount] != -1)
        {
            return cache[n][amount];
        }
        int inc = INT_MAX;
        int exc = INT_MAX;
        if (coins[n - 1] <= amount)
        {
            inc = coinChangeRec(coins, amount - coins[n - 1], n, cache);
            if (inc != INT_MAX)
            {
                inc += 1;
            }
        }
        exc = coinChangeRec(coins, amount, n - 1, cache);

        return cache[n][amount] = min(inc, exc);
    }

public:
    int coinChange(vector<int> &coins, int amount)
    {
        vector<vector<int>> cache(coins.size() + 1, vector<int>(amount + 1, -1));
        int x = coinChangeRec(coins, amount, coins.size(), cache);
        return x == INT_MAX ? -1 : x;
    }
};