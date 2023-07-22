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
void level_Order(Node *root)
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

        // 2. jabotiyo ja kaj ase
        cout << parent->val << " ";

        // 3. tar children guloke rakha
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    cout << '\n';
}
void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
    }

    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}
int main()
{
    Node *root = Input_Tree(); // 20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1
    cout << "Before Insert: ";
    level_Order(root); // 20 10 30 15 25 35

    // int x;
    // cin >> x;
    // insert(root, x);

    // Insert Node in bst er complexity worst case a O(hight); [ 1 tq node insert korar complexity]
    insert(root, 13);
    insert(root, 32);
    insert(root, 27);
    insert(root, 22);

    cout << "After Insert: ";
    level_Order(root); //  20 10 30 15 25 35 13 22 27 32

    return 0;
}