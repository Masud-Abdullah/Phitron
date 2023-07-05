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
void delete_at_position(Node *&head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *DeleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->pre = tmp;
    delete DeleteNode;
}
void delete_tail(Node *&head, Node *&tail)
{
    Node *DeleteTail = tail;
    tail = tail->pre;
    delete DeleteTail;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}
void delete_head(Node *&head, Node *&tail)
{
    Node *DeleteHead = head;
    head = head->next;
    delete DeleteHead;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->pre = NULL;
}
int main()
{
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *tail = c;

    // // connection
    // head->next = a;
    // a->pre = head;
    // a->next = b;
    // b->pre = a;
    // b->next = c;
    // c->pre = b;

    Node *head = new Node(10);
    Node *tail = head;

    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid Position\n";
    }
    else if (pos == 0)
    {
        delete_head(head, tail);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(head, tail);
    }
    else
        delete_at_position(head, pos);

    print_normal(head);
    print_reverse(tail);
    return 0;
}