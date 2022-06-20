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
    TreeNode *searchAndDeleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
        {
            return root;
        }
        else if (root->val < key)
        {
            root->right = searchAndDeleteNode(root->right, key);
        }
        else if (root->val > key)
        {
            root->left = searchAndDeleteNode(root->left, key);
        }
        else
        {
            root = deleteNode(root);
        }
        return root;
    }
    TreeNode *deleteNode(TreeNode *root)
    {
        if (root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
        else if (root->left == NULL)
        {
            return root->right;
        }
        else if (root->right == NULL)
        {
            return root->left;
        }
        else
        {
            auto temp = root->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }
            root->val = temp->val;
            root->right = searchAndDeleteNode(root->right, temp->val);
            return root;
        }
    }

public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        return searchAndDeleteNode(root, key);
    }
};