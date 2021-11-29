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
    bool isValidBST(TreeNode *root, long long min, long long max)
    {
        if (root == NULL)
        {
            return true;
        }
        bool left = isValidBST(root->left, min, root->val);
        bool right = isValidBST(root->right, root->val, max);
        bool current = false;
        if (root->val < max && root->val > min)
        {
            current = true;
        }
        return left && right && current;
    }

public:
    bool isValidBST(TreeNode *root)
    {
        return isValidBST(root, INT64_MIN, INT64_MAX);
    }
};