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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> levels;
        if (root == NULL)
        {
            return levels;
        }
        queue<TreeNode *> q;
        q.push(root);
        bool isLeft = true;
        while (!q.empty())
        {
            int qSize = q.size();
            vector<int> v(qSize);
            for (int i = 0; i < qSize; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if (isLeft)
                {
                    v[i] = temp->val;
                }
                else
                {
                    v[qSize - i - 1] = temp->val;
                }
                if (temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    q.push(temp->right);
                }
            }
            levels.push_back(v);
            isLeft = !isLeft;
        }
        return levels;
    }
};