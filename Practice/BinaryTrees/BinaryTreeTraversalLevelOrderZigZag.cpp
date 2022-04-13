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
        vector<vector<int>> NodesAtLevel;
        if (root == NULL)
        {
            return NodesAtLevel;
        }
        queue<TreeNode *> q;
        bool isReversed = false;
        q.push(root);
        while (!q.empty())
        {
            vector<int> roots;
            int size = q.size();
            for (int i = 0; i < size; i++)
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
                roots.push_back(temp->val);
            }
            if (isReversed)
            {
                reverse(roots.begin(), roots.end());
                NodesAtLevel.push_back(roots);
            }
            else
            {
                NodesAtLevel.push_back(roots);
            }
            isReversed = !isReversed;
        }
        return NodesAtLevel;
    }
};