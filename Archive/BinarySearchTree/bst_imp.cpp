#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void preorder_print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder_print(root->left);
    preorder_print(root->right);
}
//In order of binary search tree is sorted
void inorder_print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder_print(root->left);
    cout << root->data << " ";
    inorder_print(root->right);
}

void postorder_print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder_print(root->left);
    postorder_print(root->right);
    cout << root->data << " ";
}

bool search(node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == data)
    {
        return true;
    }
    if (data < root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}
node *insert_in_bst(node *root, int d)
{
    if (root == NULL)
    {
        return new node(d);
    }
    if (root->data > d)
    {
        root->left = insert_in_bst(root->left, d);
    }
    else
    {
        root->right = insert_in_bst(root->right, d);
    }
    return root;
}

node *build()
{
    int d;
    cin >> d;

    node *root = NULL;
    while (d != -1)
    {
        root = insert_in_bst(root, d);
        cin >> d;
    }
    return root;
}

void print_all_levels_bfs(node *root)
{
    queue<node *> q;

    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {

        node *n = q.front();
        if (n == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << n->data << " , ";

            q.pop();
            if (n->left != NULL)
            {
                q.push(n->left);
            }
            if (n->right != NULL)
            {
                q.push(n->right);
            }
        }
    }
}

node *delete_in_bst(node *root, int d)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (d < root->data)
    {
        root->left = delete_in_bst(root->left, d);
        return root;
    }
    else if (d == root->data)
    {
        //0 Child
        if (root->left == NULL &&root->right = NULL)
        {
            delete root;
            return NULL;
        }
        //1 Child
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == NULL && root->left != NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        node *replace - root->right;
        while (replace->left != NULL)
        {
            replace = replace - left;
        }
        root->data = replace->data;
        root->right = delete_in_bst(root->right, replace->data);
        return root;

        //2 Child
    }
    else
    {
        root->right = delete_in_bst(root->right, d);
        return root;
    }
}

int main()
{
    node *root = build();

    cout << endl;
    inorder_print(root);
    cout << endl;
    print_all_levels_bfs(root);
    return 0;
}