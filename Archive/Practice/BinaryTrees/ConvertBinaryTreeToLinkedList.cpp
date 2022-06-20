//1. This method is using a vector which has the preorder traversal value. Iterating over the vector and adding the value.
class Solution
{
private:
    void add(TreeNode *root, vector<int> &sol)
    {
        if (root == NULL)
        {
            return;
        }
        sol.push_back(root->val);
        add(root->left, sol);
        add(root->right, sol);
    }

public:
    void flatten(TreeNode *root)
    {
        vector<int> sol;
        add(root, sol);
        auto temp = root;
        if (sol.size() > 0)
        {
            temp->val = sol[0];
            for (int i = 1; i < sol.size(); i++)
            {
                temp->left = NULL;
                temp->right = new TreeNode(sol[i]);
                temp = temp->right;
            }
        }
    }
};



//2. Iterative approach using stack - Updating root.
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL){
            return;
        }
        stack<TreeNode*> st;
        st.push(root);
        auto iter=root;
        auto temp=st.top();
        st.pop();
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
        iter->val=temp->val;
        iter->left=NULL;
        while(!st.empty()){
         temp=st.top();
            st.pop();
            if(temp->right){
                st.push(temp->right);
            }
            if(temp->left){
                st.push(temp->left);
            }
            iter->right=new TreeNode(temp->val);
            iter=iter->right;
        }
    }
};