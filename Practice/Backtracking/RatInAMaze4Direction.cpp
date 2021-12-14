#include <iostream>
#include <vector>

using namespace std;

class Solution
{
private:
    bool findPathRec(vector<vector<int>> &m, vector<vector<int>> &visited, int n, vector<char> &path, vector<string> &paths, int i, int j, char d)
    {
        if (i == n - 1 && j == n - 1)
        {
            if (m[i][j] == 1)
            {
                path.push_back(d);
                string s = "";
                for (auto value : path)
                {
                    s = s + value;
                }
                paths.push_back(s);
                path.pop_back();
                return true;
            }
            return false;
        }
        if (i >= n || j >= n || i < 0 || j < 0)
        {
            return false;
        }
        if (m[i][j] == 0)
        {
            return false;
        }
        if (visited[i][j] == 1)
        {
            return false;
        }
        visited[i][j] = 1;
        if (d != ' ')
        {
            path.push_back(d);
        }

        bool left = findPathRec(m, visited, n, path, paths, i, j - 1, 'L');
        bool right = findPathRec(m, visited, n, path, paths, i, j + 1, 'R');
        bool up = findPathRec(m, visited, n, path, paths, i - 1, j, 'U');
        bool bottom = findPathRec(m, visited, n, path, paths, i + 1, j, 'D');
        path.pop_back();
        visited[i][j] = 0;
        return left || right || up || bottom;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<vector<int>> visited(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }
        vector<char> path;
        vector<string> paths;
        bool ans = findPathRec(m, visited, n, path, paths, 0, 0, ' ');
        sort(paths.begin(), paths.end());
        if (ans)
        {
            return paths;
        }
        else
        {
            return {};
        }
    }
};

int main()
{
    return 0;
}