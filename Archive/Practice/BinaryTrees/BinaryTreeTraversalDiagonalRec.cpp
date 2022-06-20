void solveRec(TreeNode *A, int t, map<int, vector<int>> &res)
{
    if (A == NULL)
    {
        return;
    }
    res[t].push_back(A->val);
    solveRec(A->left, t + 1, res);
    solveRec(A->right, t, res);
}
vector<int> Solution::solve(TreeNode *A)
{
    map<int, vector<int>> res;
    solveRec(A, 0, res);
    vector<int> ans;
    for (auto it : res)
    {
        for (auto t : it.second)
        {
            ans.push_back(t);
        }
    }
    return ans;
}
