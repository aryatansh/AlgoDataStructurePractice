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
public:
    //1st in pair return height and second returns the diameter - O(n)
    pair<int, int> diameterOfBinaryTreeBottomUp(TreeNode *root)
    {
        if (root == NULL)
        {
            return {0, 0};
        }
        auto l = diameterOfBinaryTreeBottomUp(root->left);
        auto r = diameterOfBinaryTreeBottomUp(root->right);

        int height = max(l.first, r.first) + 1;
        int diameter = max({height, l.second, r.second});
        return {height, diameter};
    }

    //1st in pair return height and second returns the diameter
    pair<int, int> diameterOfBinaryTreeBottomUp(TreeNode *root)
    {
        if (root == NULL)
        {
            return {0, 0};
        }
        auto l = diameterOfBinaryTreeBottomUp(root->left);
        auto r = diameterOfBinaryTreeBottomUp(root->right);

        int height = max(l.first, r.first) + 1;
        int diameter = max({l.first + r.first + 1, l.second, r.second});
        return {height, diameter};
    }

    //Top down approach - O(n2)
    int heightOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int left = heightOfBinaryTree(root->left) + 1;
        int right = heightOfBinaryTree(root->right) + 1;
        return max(left, right);
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int hl = heightOfBinaryTree(root->left);
        int hr = heightOfBinaryTree(root->right);
        int total = hl + hr;
        int dl = diameterOfBinaryTree(root->left);
        int dr = diameterOfBinaryTree(root->right);
        return max(max(dl, dr), total);
    }
};