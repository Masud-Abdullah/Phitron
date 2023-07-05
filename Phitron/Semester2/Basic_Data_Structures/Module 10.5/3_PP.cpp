/*
Question: Take a doubly linked list as input and check if it forms any palindrome or not.
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
void palindrome(Node *&head,Node *&tail)
{
    Node* i=head;
    Node* j=tail;
    bool f=true;
    while(i!=j && j->next!=i)
    {
        if(i->val!=j->val)
        {
            f=false;
            break;
        }
        i=i->next;
        j=j->prev; 
    }

    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
    palindrome(head,tail);

    return 0;
}


//ANother Way
// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;
//     Node* prev;

//     Node(int val)
//     {
//         this->val=val;
//         next=NULL;
//         prev=NULL;
//     }
// };
// void insert_at_tail(Node *&head1,Node *&tail1,Node *&head2,Node *&tail2,int val)
// {
//     Node* newnode1 = new Node(val);
//     Node* newnode2 = new Node(val);

//     if(head1==NULL)
//     {
//         head1=newnode1;
//         tail1=newnode1;

//         head2=newnode2;
//         tail2=newnode2;
//         return;
//     }

//     tail1->next=newnode1;
//     newnode1->prev=tail1;
//     tail1=newnode1;

//     tail2->next=newnode2;
//     newnode2->prev=tail2;
//     tail2=newnode2;
// }
// void print(Node *&head)
// {
//     Node* tmp = head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
// int size(Node *&head)
// {
//     Node* tmp=head;
//     int count=0;
//     while(tmp!=NULL)
//     {
//         count++;
//         tmp=tmp->next;
//     }
//     return count;
// }
// void reverse(Node *&head,Node *&tail)
// {
//     Node* i=head;
//     Node* j=tail;
//     while(i!=j && j->next!=i)
//     {
//         swap(i->val,j->val);
//         i=i->next;
//         j=j->prev; 
//     }
// }
// int main()
// {
//     Node* head1=NULL;
//     Node* head2=NULL;

//     Node* tail1=NULL;
//     Node* tail2=NULL;

//     while(true)
//     {
//         int val;
//         cin>>val;
//         if(val==-1)break;
//         insert_at_tail(head1,tail1,head2,tail2,val);
//     }
//     reverse(head2,tail2);

//     Node* tmp1=head1;
//     Node* tmp2=head2;
//     int size1 = size(head1);
//     int size2 = size(head2);
//     if(size1!=size2)
//     {
//         cout<<"NO"<<endl;
//     }
//     else
//     {
//         bool f=true;
//         while(tmp1!=NULL && tmp2!=NULL)
//         {
//             if(tmp1->val!=tmp2->val)
//             {
//                 f=false;
//                 break;
//             }
//             tmp1=tmp1->next;
//             tmp2=tmp2->next;
//         }
//         if(f)cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }

//     return 0;
// }