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
int max_Height(Node *root)
{
    
    if (root == NULL)
        return 0;

    int left = max_Height(root->left);
    int right = max_Height(root->right);
    return max(left, right) + 1;
}
int main()
{
    Node *root = Input_Tree();
    cout << max_Height(root) << endl;
    // Input:10 20 30 40 50 60 70 80 90 100 -1 -1 110 -1 120 -1 -1 -1 -1 -1 -1 -1 -1 130 -1 -1 -1
    // Output: 5
    return 0;
}