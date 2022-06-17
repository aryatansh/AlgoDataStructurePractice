class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        for (int i = 0; i < rowSize; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < rowSize; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
