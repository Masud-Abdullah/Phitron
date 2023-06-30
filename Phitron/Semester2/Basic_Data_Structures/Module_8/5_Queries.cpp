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
void insert_at_tail(Node *&head, Node *&tail, int val, int pos)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else if (pos == 0)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int pos, val;
        cin >> pos >> val;

        insert_at_tail(head, tail, val, pos);
        cout << head->val << " " << tail->val << endl;
    }
    return 0;
}