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
    pair<bool, int> isTreeBalanced(TreeNode *root)
    {
        if (root == NULL)
        {
            return {true, 0};
        }
        auto left = isTreeBalanced(root->left);
        auto right = isTreeBalanced(root->right);
        auto first = left.first && right.first && (abs(left.second - right.second) < 2);
        return {first, max(left.second, right.second) + 1};
    }

public:
    bool isBalanced(TreeNode *root)
    {

        return isTreeBalanced(root).first;
    }
};