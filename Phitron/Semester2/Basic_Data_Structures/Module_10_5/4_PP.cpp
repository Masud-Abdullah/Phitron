/*
Question: You have a doubly linked list which is empty initially. You need to take a
value Q which refers to queries. For each query you will be given X and V.
You will insert the value V to the Xth index of the doubly linked list and print
the list in both left to right and right to left. If the index is invalid then
print “Invalid”.
*/
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
void insert_at_position(Node *&head, int pos, int val)
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
void print_reverse(Node *&tail)
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
    cin>>q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "Invalid Index" << endl;
        }
        else if (pos == 0)
        {
            insert_at_head(head, tail, val);
            print(head);
            print_reverse(tail);
        }
        else if (pos == size(head))
        {
            insert_at_tail(head, tail, val);
            print(head);
            print_reverse(tail);
        }
        else
        {
            insert_at_position(head, pos, val);
            print(head);
            print_reverse(tail);
        }
    }
    return 0;
}