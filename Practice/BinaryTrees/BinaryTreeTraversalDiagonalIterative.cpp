/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode *A)
{
    vector<int> res;
    queue<TreeNode *> t;
    t.push(A);
    while (!t.empty())
    {
        auto temp = t.front();
        t.pop();
        while (temp)
        {
            res.push_back(temp->val);
            if (temp->left)
            {
                t.push(temp->left);
            }
            temp = temp->right;
        }
    }
    return res;
}
