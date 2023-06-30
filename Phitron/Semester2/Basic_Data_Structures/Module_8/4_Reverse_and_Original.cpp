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
void print(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
        return;

    cout << tmp->val << " ";
    print(tmp->next);
}
void reverse(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
        return;

    reverse(tmp->next);
    cout << tmp->val << " ";
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
    reverse(head);
    cout << endl;
    print(head);
    return 0;
}