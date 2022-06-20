#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int a = 0;
    cin >> a;
    if (a == -1)
    {
        return NULL;
    }
    Node *n = new Node(a);

    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void InOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InOrderTraversal(root->left);
    cout << root->value << " ";
    InOrderTraversal(root->right);
}

vector<int> inorderTraversalStack(Node *root)
{
    vector<int> res;
    stack<Node *> st;
    auto curr = root;
    while (!st.empty() || curr != NULL)
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        res.push_back(curr->val);
        curr = curr->right;
    }
    return res;
}
void PreOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->value << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void PostOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->value << " ";
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> v;
    if (root == NULL)
    {
        return v;
    }
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        auto n = st.top();
        st.pop();
        v.push_back(n->val);
        if (n->right != NULL)
        {

            st.push(n->right);
        }
        if (n->left != NULL)
        {
            st.push(n->left);
        }
    }
    return v;
}

int CalculateHeightTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int hl = CalculateHeightTree(root->left);
    int hr = CalculateHeightTree(root->right);
    return max(hl, hr) + 1;
}
void BreadthFirstSearch(Node *root)
{
    queue<Node *> q;
    if (root == NULL)
    {
        return;
    }
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {

        auto node = q.front();
        if (node == NULL)
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
            cout << node->value << " ";
            q.pop();

            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
        }
    }
}
void KthLevelOrderPrint(Node *root, int i, int h, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (i == k)
    {
        cout << root->value << " ";
    }
    KthLevelOrderPrint(root->left, i + 1, h, k);
    KthLevelOrderPrint(root->right, i + 1, h, k);
}

void LevelOrderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    int height = CalculateHeightTree(root);
    cout << height << endl
         << endl;

    for (int i = 1; i <= height; i++)
    {
        KthLevelOrderPrint(root, 1, height, i);
        cout << endl;
    }
}
int DiameterOfTree(Node *root)
{
    if (root = NULL)
    {
        return 0;
    }
    int h1 = CalculateHeightTree(root->left);
    int h2 = CalculateHeightTree(root->right);
    int h = h1 + h2;
    int dl = DiameterOfTree(root->left);
    int dr = DiameterOfTree(root->right);
    return max(h, max(dl, dr))
}
vector<vector<int>> levelOrder(Node *root)
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
        vector<int> in;
        for (int i = 0; i < a; i++)
        {
            auto temp = q.front();
            q.pop();
            in.push_back(temp->val);
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        v.push_back(in);
    }
    return v;
}
int main()
{

    Node *root = buildTree();
    InOrderTraversal(root);
    cout << endl;
    PreOrderTraversal(root);
    cout << endl;
    PostOrderTraversal(root);
    cout << endl;
    LevelOrderPrint(root);
    cout << endl;
    BreadthFirstSearch(root);
    return 0;
}