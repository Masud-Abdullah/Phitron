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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

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
void Print_Linked_List(Node *&head, int size)
{
    Node *tmp = head;
    int ln = 1;
    while (tmp != NULL)
    {
        if (size % 2 == 0)
        {
            if (ln == size / 2 || ln == (size / 2) + 1)
            {
                cout << tmp->val << " ";
            }
        }
        else
        {
            if (ln == (size / 2) + 1)
            {
                cout << tmp->val << " ";
            }
        }

        tmp = tmp->next;
        ln++;
    }
    cout << '\n';
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    Print_Linked_List(head, size(head));
    return 0;
}