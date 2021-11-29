/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    bool lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q, TreeNode *&t)
    {
        if (root == NULL)
        {
            return false;
        }
        auto left = lowestCommonAncestor(root->left, p, q, t);
        auto right = lowestCommonAncestor(root->right, p, q, t);
        if (left && right)
        {
            t = root;
        }
        if ((left || right) && (root == p || root == q))
        {
            t = root;
        }
        if (root == p && p == q)
        {
            t = root;
        }

        return left || right || root == p || root == q;
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        TreeNode *t = NULL;
        lowestCommonAncestor(root, p, q, t);
        return t;
    }
};