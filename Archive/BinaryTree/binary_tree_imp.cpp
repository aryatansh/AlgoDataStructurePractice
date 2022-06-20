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
    };
};

node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

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

int height_of_tree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_height = height_of_tree(root->left);
    int right_height = height_of_tree(root->right);

    int height = max(left_height, right_height) + 1;
    return height;
}

void levelorder_print_KthLevel(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 1)
    {
        cout << root->data << " ";
    }
    levelorder_print_KthLevel(root->left, k - 1);
    levelorder_print_KthLevel(root->right, k - 1);
}

void print_all_levels(node *root)
{
    int h = height_of_tree(root);
    for (int i = 1; i <= h; i++)
    {
        levelorder_print_KthLevel(root, i);
        cout << endl;
    }
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

int count_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_count = count_nodes(root->left);
    int right_count = count_nodes(root->right);
    int count = left_count + right_count + 1;
    return count;
}

int sum_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_count = sum_nodes(root->left);
    int right_count = sum_nodes(root->right);
    return root->data + left_count + right_count;
}

int diameter_of_tree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = height_of_tree(root->left);
    int h2 = height_of_tree(root->right);
    int op1 = h1 + h2;
    int op2 = diameter_of_tree(root->left);
    int op3 = diameter_of_tree(root->right);
    return max(op1, max(op2, op3));
}

int replace_sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return root->data;
    }
    int temp = root->data;
    int left_sum = replace_sum(root->left);
    int right_sum = replace_sum(root->right);
    root->data = left_sum + right_sum;
    return left_sum + right_sum + temp;
}
class Pair
{
public:
    int height;
    int diameter;
};

Pair diameter_of_tree_optimized(node *root)
{

    Pair p;
    if (root == NULL)
    {
        p.diameter = p.height = 0;
        return p;
    }

    Pair left = diameter_of_tree_optimized(root->left);
    Pair right = diameter_of_tree_optimized(root->right);

    p.height = max(left.height, right.height) + 1;
    p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
    return p;
}

class HBPair
{
public:
    int height;
    bool balance;
};
HBPair is_height_balanced(node *root)
{

    HBPair hb;
    if (root == NULL)
    {
        hb.height = 0;
        hb.balance = true;
        return hb;
    }
    HBPair left = is_height_balanced(root->left);
    HBPair right = is_height_balanced(root->right);

    HBPair hb;
    if ((abs(left.height - right.height) <= 1) && left.balance && right.balance)
    {
        hb.balance = true;
    }
    else
    {
        hb.balance = false;
    }
    hb.height = max(left.height, right.height) + 1;
    return hb;
}

node *build_balanced_tree(int *a, int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    node *root = new node(a[mid]);
    root->left = build_balanced_tree(a, s, mid - 1);
    root->right = build_balanced_tree(a, mid + 1, e);

    return root;
}

int main()
{
    node *root = buildTree();
    // cout << endl;
    // preorder_print(root);
    // cout << endl;
    // inorder_print(root);
    // cout << endl;
    // postorder_print(root);
    // cout << endl;
    // cout << height_of_tree(root);
    // cout << endl;
    // print_all_levels(root);
    cout << endl;
    print_all_levels_bfs(root);
    //cout << endl;
    // cout << count_nodes(root);
    cout << endl;
    //cout << sum_nodes(root);
    //cout << diameter_of_tree_optimized(root).diameter << "  ";
    cout << endl;
    cout << replace_sum(root);
    cout << endl;
    cout << endl;
    print_all_levels_bfs(root);
}