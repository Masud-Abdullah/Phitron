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
void level_Order(Node *root, priority_queue<int> &pq)
{
    if (root == NULL)
    {
        cout << "Tree Nai\n";
        return;
    }
    // Level Order print a queue use korte hobe.
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *parent = q.front();
        q.pop();
        pq.push(parent->val);

        // 2. jabotiyo ja kaj ase
        // cout << parent->val << " ";

        // 3. tar children guloke rakha
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
}
int main()
{
    Node *root = Input_Tree();
    priority_queue<int> pq;
    level_Order(root, pq);

    int t;
    cin >> t;
    while (t--)
    {
        int val;
        cin >> val;
        if (val == 1)
        {
            int val2;
            cin >> val2;
            pq.push(val2);
        }
        else
        {
            cout << pq.top() << endl;
            pq.pop();
        }
    }

    return 0;
}