class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int rsize = matrix.size();
        int csize = matrix[0].size();
        bool isCol = false;
        for (int i = 0; i < rsize; i++)
        {
            if (matrix[i][0] == 0)
                isCol = true;
            for (int j = 1; j < csize; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = rsize - 1; i >= 0; i--)
        {
            for (int j = csize - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            if (isCol)
                matrix[i][0] = 0;
        }
    }
};
