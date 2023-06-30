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
        cout << endl
             << "Inserted at Head" << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // temp ekhon last node a
    tmp->next = NewNode; // tail er next a new node er address diye dilam r linked hoye gelo
    cout << endl
         << "Inserted at Tail" << endl
         << endl;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Your Linked List : ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *New_Node = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    New_Node->next = tmp->next;
    tmp->next = New_Node;
    cout << endl
         << endl
         << "Inserted at position: " << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *New_Node = new Node(v);
    New_Node->next = head;
    head = New_Node;       //head ta update kore dilam jate print or onno kono operation korar shomoy notun head theke jatra shuru kore.
    cout << endl
         << "Inserted at head" << endl
         << endl;
}
void delete_from_position(Node *&head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_node;
    cout << endl
         << endl
         << "Deleted from position: " << pos << endl
         << endl;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head is not available" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    head = head->next;
    delete tmp;
    cout << endl
         << "Deleted Head" << endl
         << endl;
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
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7: Terminate" << endl;
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
                if(head==NULL && pos!=0)
                {
                    cout<<"Invalid Index"<<endl;
                }
                else insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            cout << "Enter position: ";
            int pos;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
                delete_from_position(head, pos);
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}