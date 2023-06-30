#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};
void insert_at_pos(Node *&head, int val, int pos)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->prev = tmp;
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
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
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
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
void print(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void reverse_print(Node *&tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, v);
            cout << "L -> ";
            print(head);
            cout << "R -> ";
            reverse_print(tail);
        }
        else if (x == size(head))
        {
            insert_at_tail(head, tail, v);
            cout << "L -> ";
            print(head);
            cout << "R -> ";
            reverse_print(tail);
        }
        else
        {
            insert_at_pos(head, v, x);
            cout << "L -> ";
            print(head);
            cout << "R -> ";
            reverse_print(tail);
        }
    }
    return 0;
}