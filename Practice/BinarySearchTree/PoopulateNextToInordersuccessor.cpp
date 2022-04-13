
class Solution
{
private:
    Node *temp = NULL;
    void populate(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        populate(root->right);
        root->next = temp;
        temp = root;
        populate(root->left);
    }

public:
    void populateNext(Node *root)
    {
        populate(root);
    }
};
