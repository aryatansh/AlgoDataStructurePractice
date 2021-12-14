class Solution
{
    vector<string> digitValues = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void letterCombinations(string digits, int i, vector<string> &a, string s)
    {
        if (i == digits.size())
        {
            a.push_back(s);
            return;
        }
        int d = digits[i] - '0' - 2;
        string value = digitValues[d];
        for (int j = 0; j < value.size(); j++)
        {
            letterCombinations(digits, i + 1, a, s + value[j]);
        }
        return;
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> a;
        if (digits == "")
        {
            return a;
        }
        letterCombinations(digits, 0, a, "");
        return a;
    }
};