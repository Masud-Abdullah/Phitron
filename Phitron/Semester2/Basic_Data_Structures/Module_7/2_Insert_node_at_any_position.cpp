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
void print_Linked_List(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int get_size(Node *&head)
{
    int count=0;
    Node *tmp = head;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void insert(Node *&head, int pos, int val)
{
    Node* new_node = new Node(val);
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    //tmp ekhon pos-1 a ache.
    new_node->next = tmp->next;
    tmp->next = new_node;
}
void insert_at_head(Node *&head,int val)
{
    Node *new_node = new Node(val);
    new_node->next=head;
    head=new_node;
}
void insert_at_tail(Node *&head, Node *& tail,int val)
{
    Node *new_node = new Node(val);
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}
int main()
{
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *d = new Node(50);
    // Node *tail=d;
    // head->next = a;
    // a->next = b;
    // b->next = c;
    // c->next = d;
    Node* head=NULL;
    Node* tail=NULL;
    
    int pos,val;
    cin>>pos>>val;
    if(pos>get_size(head))
    {
        cout<<"Invalid Index\n";
    }
    else if(pos==0)
    {
        insert_at_head(head,val);
    }
    else if(pos==get_size(head))
    {
        insert_at_tail(head,tail,val);
    }
    else insert(head,pos,val);

    print_Linked_List(head);
    return 0;
}