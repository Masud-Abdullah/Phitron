/*
Question: Take a doubly linked list as input and reverse it. After that print the linked list.
*/

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val=val;
        next=NULL;
        prev=NULL;
    }
};
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }

    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void reverse(Node *&head,Node *&tail)
{
    Node* i=head;
    Node* j=tail;
    while(i!=j && j->next!=i)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev; 
    }
}
void print(Node *&head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);
    }

    reverse(head,tail);
    print(head);

    return 0;
}