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
private:
    void inOrderSuccessor(TreeNode *root, TreeNode *p, vector<TreeNode *> &nodes)
    {
        if (root == NULL)
        {
            return;
        }
        inOrderSuccessor(root->left, p, nodes);
        nodes.push_back(root);
        inOrderSuccessor(root->right, p, nodes);
    }

public:
    TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p)
    {
        vector<TreeNode *> t;
        inOrderSuccessor(root, p, t);
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i]->val == p->val)
            {
                int k = i + 1;
                if (k < t.size())
                {
                    return t[k];
                }
            }
        }
        return NULL;
    }
};

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
    void inorderSuccessor(TreeNode *root, TreeNode *p, TreeNode *&t)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->val <= p->val)
        {
            inorderSuccessor(root->right, p, t);
            return;
        }
        if (root->val > p->val)
        {
            t = root;
            inorderSuccessor(root->left, p, t);
            return;
        }
    }

public:
    TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p)
    {
        TreeNode *t = NULL;
        inorderSuccessor(root, p, t);
        if (t == NULL)
        {
            return NULL;
        }
        return t;
    }
};