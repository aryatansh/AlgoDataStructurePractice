/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
#include <unordered_map>
vector<int> bottomView(BinaryTreeNode<int> *root)
{
    vector<int> bottomNodes;
    if (root == NULL)
    {
        return bottomNodes;
    }
    unordered_map<int, int> bottomAtXAxis;
    queue<pair<BinaryTreeNode<int> *, int>> q;
    q.push(make_pair(root, 0));
    int minIndex = 0;
    int maxIndex = 0;
    while (!q.empty())
    {
        auto temp = q.front();
        q.pop();
        bottomAtXAxis[temp.second] = temp.first->data;
        minIndex = min(minIndex, temp.second);
        maxIndex = max(maxIndex, temp.second);
        if (temp.first->left != NULL)
        {
            q.push(make_pair(temp.first->left, temp.second - 1));
        }
        if (temp.first->right != NULL)
        {
            q.push(make_pair(temp.first->right, temp.second + 1));
        }
    }
    for (int i = minIndex; i <= maxIndex; i++)
    {
        bottomNodes.push_back(bottomAtXAxis[i]);
    }
}
