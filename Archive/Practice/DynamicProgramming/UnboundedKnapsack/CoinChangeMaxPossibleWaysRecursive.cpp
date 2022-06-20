class Solution
{
private:
    int coinChangeRec(int amount, vector<int> &coins, int n, vector<vector<int>> &cache)
    {
        if (amount == 0)
        {
            return 1;
        }
        if (n == 0)
        {
            return 0;
        }
        if (cache[n][amount] != -1)
        {
            return cache[n][amount];
        }
        int inc = 0;
        int exc = 0;
        if (coins[n - 1] <= amount)
        {
            inc = coinChangeRec(amount - coins[n - 1], coins, n, cache);
        }
        exc = coinChangeRec(amount, coins, n - 1, cache);
        return cache[n][amount] = inc + exc;
    }

public:
    int change(int amount, vector<int> &coins)
    {
        vector<vector<int>> cache(coins.size() + 1, vector<int>(amount + 1, -1));
        return coinChangeRec(amount, coins, coins.size(), cache);
    }
};