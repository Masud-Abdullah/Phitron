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
void insert_at_tail(Node *&head, int v) // ekhane head er reference niyechi. tai directly pointer a change korleo main function a change hobe.
{
    Node *NewNode = new Node(v);
    if (head == NULL) // mainly ei case er jonnoi head er reference niyechi
    {
        head = NewNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = NewNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *New_Node = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    New_Node->next = tmp->next;
    tmp->next = New_Node;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *New_Node = new Node(v);
    New_Node->next = head;
    head=New_Node;
    cout << endl
         << "Inserted at head" << endl
         << endl;
}
void delete_from_position(Node *&head, int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node *delete_node=tmp->next;
    tmp->next=tmp->next->next;
    delete delete_node;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any Position" << endl;
        cout << "Option 4: Insert at Head" << endl;
        cout << "Option 5: Delete from Position" << endl;
        cout << "Option 6: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if(op==5)
        {
            cout << "Enter position: ";
            int pos;
            cin>>pos;
            delete_from_position(head,pos);
        }
        else if (op == 6)
        {
            break;
        }
    }

    return 0;
}