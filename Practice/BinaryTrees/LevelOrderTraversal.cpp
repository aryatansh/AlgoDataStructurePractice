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
    vector<vector<int>> levelOrder(TreeNode *root)
    {

        vector<vector<int>> v;
        if (root == NULL)
        {
            return v;
        }
        queue<TreeNode *> q;

        q.push(root);
        while (!q.empty())
        {
            int a = q.size();
            vector<int> vec(a);
            for (int i = 0; i < a; i++)
            {
                vec[i] = q.front()->val;
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
            v.push_back(vec);
        }
        return v;
    }
};