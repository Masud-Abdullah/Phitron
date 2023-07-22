#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *Input_Tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 1. ber kore ano
        Node *parent = q.front();
        q.pop();

        // 2. Jabotiyo ja kaj ase
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        parent->left = myLeft;
        parent->right = myRight;

        // 3. children guloke push koro.
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}
void levelNodes(Node *root, int row)
{
    queue<pair<Node *, int>> q;
    if (root != NULL)
        q.push({root, 0});

    vector<int> v;
    while (!q.empty())
    {
        // first a parent ke ber korbo
        pair<Node *, int> parent = q.front();
        q.pop();
        Node *node = parent.first;
        int level = parent.second;

        // jabotiyo kaj

        if (level == row)
        {
            v.push_back(node->val);
        }
        // children ke push korbo
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }

    if (!v.empty())
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
    else
    {
        if (v.empty())
            cout << "Invalid\n";
    }
}
int main()
{
    Node *root = Input_Tree();
    int row;
    cin >> row;
    levelNodes(root, row);


    return 0;
}