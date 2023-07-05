/*
Question: Take a singly linked list as input, then take q queries.
In each query you will be given an index and value. You need to insert
those values in the given index and print the linked list.
If the index is invalid print “Invalid”.
*/

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
void Insert_at_Tail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
}
void Print_Linked_List(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << '\n';
}
void Insert_at_Position(Node *&head, int pos, int val)
{
    Node *new_node = new Node(val);
    Node *tmp = head;

    if (pos == 0)
    {
        new_node->next = tmp;
        head = new_node;
        Print_Linked_List(head);
        return;
    }
    for (int i = 1; i <= pos - 1; i++) // 2 4 6 8
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid\n";
            return;
        }
    }
    new_node->next=tmp->next;
    tmp->next=new_node;
    Print_Linked_List(head);
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        Insert_at_Tail(head, val);
    }
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int pos, val;
        cin >> pos >> val;
        Insert_at_Position(head, pos, val);
    }
    return 0;
}