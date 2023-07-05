/*
Question: Take a singly linked list as input and print the middle element.
If there are multiple values in the middle print both.
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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
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
int get_size(Node *&head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
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
    Print_Linked_List(head, get_size(head));
    return 0;
}
