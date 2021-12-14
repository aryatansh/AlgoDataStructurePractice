class Solution
{
private:
    bool IsQueenAtPositionPossible(vector<string> maze, int a, int b, int n)
    {
        for (int i = 0; i <= a; i++)
        {
            if (maze[i][b] == 'Q')
            {
                return false;
            }
        }
        for (int i = 0; i <= b; i++)
        {
            if (maze[a][i] == 'Q')
            {
                return false;
            }
        }
        int i = 0;
        while ((a - i) >= 0 && (b - i) >= 0)
        {
            if (maze[a - i][b - i] == 'Q')
            {
                return false;
            }
            i++;
        }
        i = 0;
        while ((a - i) >= 0 && (b + i) < n)
        {
            if (maze[a - i][b + i] == 'Q')
            {
                return false;
            }
            i++;
        }

        return true;
    }

    bool solveNQueens(vector<string> &maze, vector<vector<string>> &answer, int x, int n)
    {
        if (x == n)
        {
            answer.push_back(maze);
            return false;
        }
        for (int i = 0; i < n; i++)
        {
            if (IsQueenAtPositionPossible(maze, x, i, n))
            {
                maze[x][i] = 'Q';
                bool isSolved = solveNQueens(maze, answer, x + 1, n);
                if (isSolved)
                {
                    return true;
                }
                maze[x][i] = '.';
            }
        }

        return false;
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> maze(4, "....");
        vector<vector<string>> answer(0, vector<string>(0));
        solveNQueens(maze, answer, 0, n);

        return answer;
    }
};