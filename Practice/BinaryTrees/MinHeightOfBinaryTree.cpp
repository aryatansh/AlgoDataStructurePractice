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
//method 1
int minDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else if (!root->right)
    {
        return minDepth(root->left) + 1;
    }
    else if (!root->left)
    {
        return minDepth(root->right) + 1;
    }

    return min(minDepth(root->left), minDepth(root->right)) + 1;
}

//Method2
int minDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    if (left == 0)
    {
        return right + 1;
    }
    if (right == 0)
    {
        return left + 1;
    }
    return min(left, right) + 1;
}
}
;

//Iterative Method
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
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        queue<TreeNode *> q;
        q.push(root);
        int minHeight = 1;
        while (!q.empty())
        {
            int a = q.size();
            for (int i = 0; i < a; i++)
            {
                if (q.front()->left == NULL && q.front()->right == NULL)
                {
                    return minHeight;
                }
                if (q.front()->left != NULL)
                {
                    q.push(q.front()->left);
                }
                if (q.front()->right != NULL)
                {
                    q.push(q.front()->right);
                }
                q.pop();
            }
            minHeight = minHeight + 1;
        }
        return minHeight;
    }
};