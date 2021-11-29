#include <bits/stdc++.h>

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

class Solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    /*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void topView(Node *root)
    {
        unordered_map<int, int> topAtX;
        queue<pair<Node *, int>> q;
        topAtX.insert(make_pair(0, root->data));
        q.push(make_pair(root, 0));
        if (root == NULL)
        {
            return;
        }
        int minIndex = 0;
        int maxIndex = 0;
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            if (topAtX.find(temp.second) == topAtX.end())
            {
                topAtX.insert(make_pair(temp.second, temp.first->data));
                minIndex = min(minIndex, temp.second);
                maxIndex = max(maxIndex, temp.second);
            }
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
            cout << topAtX[i] << " ";
        }
    }

}; //End of Solution