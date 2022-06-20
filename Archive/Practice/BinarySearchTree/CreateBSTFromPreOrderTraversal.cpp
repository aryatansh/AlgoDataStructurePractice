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
    int index = 0;
    //index is index of variable
    //l is lowerbound for root
    //m is upperbound for root
    TreeNode *bst(vector<int> &preorder, int l, int m)
    {
        if (l >= m || index >= preorder.size())
        {
            return NULL;
        }

        int val = preorder[index];
        if (val < l || val > m)
        {
            return NULL;
        }
        TreeNode *t = new TreeNode(preorder[index]);
        index++;
        t->left = bst(preorder, l, val);
        t->right = bst(preorder, val, m);
        return t;
    }

public:
    TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        return bst(preorder, INT_MIN, INT_MAX);
    }
};