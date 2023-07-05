#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        next=NULL;
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
    // temp ekhon last node a
    tmp->next = NewNode; // tail er next a new node er address diye dilam r linked hoye gelo
}
void print_linked_list(Node *&head)
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
int main()
{
    Node* head=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,val);
    }   
    print_linked_list(head);
    return 0;
}