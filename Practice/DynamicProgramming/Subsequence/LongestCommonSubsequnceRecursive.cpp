class Solution
{
private:
    int lcsRec(string &text1, string &text2, int m, int n, vector<vector<int>> &cache)
    {
        if (m == 0 || n == 0)
        {
            return 0;
        }
        if (cache[m][n] != -1)
        {
            return cache[m][n];
        }
        if (text1[m - 1] == text2[n - 1])
        {
            return cache[m][n] = 1 + lcsRec(text1, text2, m - 1, n - 1, cache);
        }
        int left = lcsRec(text1, text2, m, n - 1, cache);
        int right = lcsRec(text1, text2, m - 1, n, cache);
        return cache[m][n] = max(left, right);
    }

public:
    int longestCommonSubsequence(string text1, string text2)
    {
        vector<vector<int>> cache(text1.size() + 1, vector<int>(text2.size() + 1, -1));
        return lcsRec(text1, text2, text1.size(), text2.size(), cache);
    }
};