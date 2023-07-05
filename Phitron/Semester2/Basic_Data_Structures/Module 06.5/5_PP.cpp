//Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.

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
void Check_the_Linked_List_sorted_or_not(Node *&head)
{
    Node *tmp = head;
    int current=0,previous=0;
    current=head->val;
    while (tmp->next != NULL)
    {
        //cout << tmp->val << " ";
        tmp = tmp->next;
        previous=current;
        current=tmp->val;
        if(previous>current)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)break;
        Insert_at_Tail(head, val);
    }
    Check_the_Linked_List_sorted_or_not(head);
    return 0;
}