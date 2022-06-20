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
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> rightNodes;
        if (root == NULL)
        {
            return rightNodes;
        }
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int qSize = q.size();
            // int lastNode;
            for (int i = 0; i < qSize; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    q.push(temp->right);
                }
                if (i == qSize - 1)
                    rightNodes.push_back(temp->val);
                // lastNode=temp->val;
            }
        }
        return rightNodes;
    }
};