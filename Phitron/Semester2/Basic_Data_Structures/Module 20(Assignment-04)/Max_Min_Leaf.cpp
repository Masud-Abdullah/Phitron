#include <bits/stdc++.h>
using namespace std;
int mx = INT_MIN, mn = INT_MAX;
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
void Leaf(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        mx = max(mx, root->val);
        mn = min(mn, root->val);
    }
    else
    {
        Leaf(root->left);
        Leaf(root->right);
    }
}
int main()
{
    Node *root = Input_Tree();
    Leaf(root);
    cout << mx << " " << mn << endl;
    
    return 0;
}