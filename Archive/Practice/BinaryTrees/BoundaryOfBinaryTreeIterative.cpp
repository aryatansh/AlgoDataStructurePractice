/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
private:
    bool isLeaf(TreeNode *t)
    {
        return t->left == NULL && t->right == NULL;
    }
    void addLeaves(TreeNode *t, vector<int> &res)
    {
        if (t == NULL)
        {
            return;
        }
        if (isLeaf(t))
        {
            res.push_back(t->val);
        }
        else
        {
            addLeaves(t->left, res);
            addLeaves(t->right, res);
        }
    }

public:
    vector<int> boundaryOfBinaryTree(TreeNode *root)
    {
        vector<int> res;
        if (root == NULL)
        {
            return res;
        }
        if (!isLeaf(root))
        {
            res.push_back(root->val);
        }
        auto t = root->left;
        while (t != NULL)
        {
            if (!isLeaf(t))
            {
                res.push_back(t->val);
            }
            if (t->left != NULL)
            {
                t = t->left;
            }
            else
            {
                t = t->right;
            }
        }
        addLeaves(root, res);
        stack<int> s;
        t = root->right;
        while (t != NULL)
        {
            if (!isLeaf(t))
            {
                s.push(t->val);
            }
            if (t->right != NULL)
            {
                t = t->right;
            }
            else
            {
                t = t->left;
            }
        }
        while (!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
};