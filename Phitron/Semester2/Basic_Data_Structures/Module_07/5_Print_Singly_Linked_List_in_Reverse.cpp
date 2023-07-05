#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
void print_reccursively(Node *n)
{
    // base case
    if (n == NULL)
        return;

    cout << n->val << " ";
    print_reccursively(n->next); // normally print korte hole age print pore function call korbo.
}
void print_reverse(Node *n)
{
    // base case
    if (n == NULL)
        return;

    print_reverse(n->next); // reverse print korte hole age function call korbo ar pore print korbo
    cout << n->val << " ";
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_reccursively(head);
    cout << endl;
    print_reverse(head);
    return 0;
}