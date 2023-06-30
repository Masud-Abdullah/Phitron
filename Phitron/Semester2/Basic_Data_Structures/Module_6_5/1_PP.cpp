// Question: Take a singly linked list as input and print the size of the linked list.
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
int main()
{
    Node *head = NULL;
    int cnt=0;
    while (true)
    {
        int val;
        cin >> val;
        if(val==-1)
        {
            cout<<cnt<<'\n';
            break;
        }
        cnt++;
        Insert_at_Tail(head, val);
    }
    //Print_Linked_List(head);
    return 0;
}