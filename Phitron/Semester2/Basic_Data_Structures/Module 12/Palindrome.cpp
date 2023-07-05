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
void reverse(Node *&head,Node *cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
void palindrome(Node *&head,Node *&head2)
{
    reverse(head,head);
    Node* tmp1=head;
    Node* tmp2=head2;
    bool f=true;
    while(tmp1!=NULL)
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
    Node* head2=NULL;
    Node* tail2=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);
        insert_at_tail(head2,tail2,val);
    }
    palindrome(head,head2);
    // reverse(head,head);
    // print(head);
    // print(head2);
    return 0;
}