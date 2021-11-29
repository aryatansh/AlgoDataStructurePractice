#include <iostream>
#include <queue>

using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void InOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InOrderTraversal(root->left);
    cout << root->data;
    InOrderTraversal(root->right);
}
void BSTLevelByLevel(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int qSize = q.size();
        for (int i = 0; i < qSize; i++)
        {
            auto temp = q.front();
            cout << temp->data << " ";
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        cout << endl;
    }
}

Node *InsertInBST(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    if (root->data > data)
    {
        root->left = InsertInBST(root->left, data);
    }
    if (root->data < data)
    {
        root->right = InsertInBST(root->right, data);
    }
    return root;
}

Node *buildTree()
{
    int nodes[] = {5, 3, 1, 7, 6, 8};
    Node *root = NULL;
    for (int i = 0; i < 6; i++)
    {
        root = InsertInBST(root, nodes[i]);
    }
    return root;
}
Node *searchInTree(Node *root, int data)
{

    Node *temp = NULL;
    if (root == NULL)
    {
        return temp;
    }
    if (root->data == data)
    {
        return root;
    }
    else if (root->data > data)
    {
        temp = searchInTree(root->left, data);
    }
    else
    {
        temp = searchInTree(root->right, data);
    }
    return temp;
}

Node *DeleteInBST(Node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data > data)
    {
        root->left = DeleteInBST(root->left, data);
    }
    if (root->data == data)
    {
        //If root is a leaf
        if (root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
        //If root has one children
        if (root->left != NULL && root->right == NULL)
        {
            return root->left;
        }
        if (root->right != NULL && root->left == NULL)
        {
            return root->right;
        }

        //If root has two childrens.
        if (root->left != NULL && root->right != NULL)
        {
            Node *replace = root->right;
            while (replace->left != NULL)
            {
                replace = replace->left;
            }
            root->data = replace->data;
            root->right = DeleteInBST(root->right, root->data);
        }
    }

    if (root->data < data)
    {
        root->right = DeleteInBST(root->right, data);
    }
    return root;
}

int main()
{
    auto t = buildTree();
    BSTLevelByLevel(t);
    InOrderTraversal(t);
    cout << endl
         << searchInTree(t, 5)->data << endl
         << endl;

    // Node *t2 = DeleteInBST(t, 3);

    BSTLevelByLevel(t);
    InOrderTraversal(t);

    cout << endl
         << CheckBST(t) << " " << true;
    return 0;
}