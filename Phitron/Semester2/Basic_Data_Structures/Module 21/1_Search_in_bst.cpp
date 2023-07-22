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
}
bool bstSearch(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;

    if (x < root->val)
    {
        return bstSearch(root->left, x);
        // bool l=bstSearch(root->left,x);
        // if(l==true)return true;
        // else return false;
    }
    else
    {
        return bstSearch(root->right, x);
        //  bool r = bstSearch(root->right, x);
        // if(r == true) return true;
        // else return false;
    }
}
int main()
{
    Node *root = Input_Tree(); // 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
    // level_Order(root);  //10 5 15 2 6 12 16 3

    int x; // complexity of bst is almost equal to hight of the tree. O(hight);
    cin >> x;

    if (bstSearch(root, x))
    {
        cout << "Yes, Found!" << endl;
    }
    else
    {
        cout << "No, Not Found!" << endl;
    }

    return 0;
}