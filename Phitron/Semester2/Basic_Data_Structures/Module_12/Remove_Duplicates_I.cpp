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
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void delete_duplicate(Node *&head)
{
    if(head->next==NULL)return;

    Node* tmp=head;
    while (tmp->next!=NULL)
    {
        if(tmp->val==tmp->next->val)
        {
            Node* deleteNode=tmp->next;
            tmp->next=tmp->next->next;
            delete deleteNode;
        }

        if(tmp->next!=NULL && tmp->val!=tmp->next->val)
        {
            tmp=tmp->next;
        }
    }
}
void print(Node *&head)
{
    Node* tmp=head;
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

    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    delete_duplicate(head);
    print(head);
    return 0;
}