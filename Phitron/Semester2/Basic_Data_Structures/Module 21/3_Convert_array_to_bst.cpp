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
Node *convert(int a[], int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftSubTree = convert(a, l, mid - 1);
    Node *rightSubTree = convert(a, mid + 1, r);

    root->left = leftSubTree;
    root->right = rightSubTree;

    return root;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) // 2 5 8 12 15 18
        cin >> a[i];

    sort(a, a + n); // sort kora na thakle array sort kre nite hbe

    Node *root = convert(a, 0, n - 1);

    level_Order(root);  //8 2 15 5 12 18
    return 0;
}