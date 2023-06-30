/*
Question: Take two doubly linked lists as input and check if they are the same or not.
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
int size(Node *&head)
{
    Node* tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
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
    Node* head1=NULL;
    Node* tail1=NULL;

    while (true)
    {
        int val;
        cin>>val;

        if(val==-1)break;
        
        insert_at_tail(head1,tail1,val);
    }

    Node* head2=NULL;
    Node* tail2=NULL;

    while (true)
    {
        int val;
        cin>>val;

        if(val==-1)break;
        
        insert_at_tail(head2,tail2,val);
    }
    // print(head1);
    // print(head2);
    Node* tmp1=head1;
    Node* tmp2=head2;
    int size1 = size(head1);
    int size2 = size(head2);
    if(size1!=size2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool f=true;
        while(tmp1!=NULL && tmp2!=NULL)
        {
            if(tmp1->val!=tmp2->val)
            {
                f=false;
                break;
            }
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}