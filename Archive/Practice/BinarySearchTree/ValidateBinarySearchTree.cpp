//1st method I tried worse of all :- Just to solve the problem
struct Info
{
    bool isBst;
    int left;
    int right;
};
class Solution
{

private:
    Info isValid(TreeNode *root)
    {
        if (root == NULL)
        {
            return {true, INT_MAX, INT_MIN};
        }
        Info left = isValid(root->left);
        Info right = isValid(root->right);
        if (!root->left && !root->right)
        {
            return {true, root->val, root->val};
        }
        if (root->left && !root->right)
        {
            if (left.isBst && root->val > left.right)
            {
                return {true, left.left, root->val};
            }
        }
        if (!root->left && root->right)
        {
            if (right.isBst && root->val < right.left)
            {
                return {true, root->val, right.right};
            }
        }
        int leftVal = left.right == INT_MIN ? INT_MIN : left.right;
        int rightVal = right.left == INT_MAX ? INT_MAX : right.left;
        if (left.isBst && right.isBst && root->val > leftVal && root->val < rightVal)
        {
            return {true, min(left.left, root->val), max(right.right, root->val)};
        }
        else
        {
            return {false, 0, 0};
        }
    }

public:
    bool isValidBST(TreeNode *root)
    {
        return isValid(root).isBst;
    }
};

//2nd method inorder successor only storing previous value

class Solution
{
private:
    TreeNode *prev = NULL;

public:
    bool isValidBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }
        if (!isValidBST(root->left))
            return false;

        if (prev)
        {
            if (root->val <= prev->val)
                return false;
        }
        prev = root;

        return isValidBST(root->right);
    }
};