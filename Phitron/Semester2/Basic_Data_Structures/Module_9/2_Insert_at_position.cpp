#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void print_normal(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *&tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
    cout << endl;
}
void insert_at_position(Node *&head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->pre = tmp;
    newnode->next = tmp->next;
    tmp->next->pre = newnode;
    tmp->next = newnode;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->pre = newnode;
    head = newnode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (tail == NULL)
    {
        head = newnode; // rahat vai module a dekhaise tai tule rakhsi but i think it's unnecessary.
        tail = newnode;
        return;
    }

    newnode->pre = tail;
    tail->next = newnode;
    tail = newnode;
}
int size(Node *&head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection
    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;
    b->next = c;
    c->pre = b;

    int pos, val;
    cin >> pos >> val;

    if (pos == 0)
    {
        insert_at_head(head, tail, val);
    }
    else if (pos > size(head))
    {
        cout << "Invalid Position\n";
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        insert_at_position(head, pos, val);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}