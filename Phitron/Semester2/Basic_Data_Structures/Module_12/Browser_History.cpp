#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string val;
    Node* next;
    Node* prev;

    Node(string val)
    {
        this->val=val;
        next=NULL;
        prev=NULL;
    }
};
void insert_at_tail(Node *&head,Node *&tail,string val)
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
void find_str(Node *head,string str,Node *&trac)
{
    Node* tmp=head;
    bool f=false;
    while(tmp!=NULL)
    {
        if(tmp->val==str)
        {
            f=true;
            trac=tmp;
            trac->val=tmp->val;
            break;
        }
        tmp=tmp->next;
    }
    if(f)cout<<str<<endl;
    else cout<<"Not Available"<<endl;
}
// void print(Node *head)
// {
//     Node* tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* trac=new Node(" ");
    while(true)
    {
        string str;
        cin>>str;
        if(str=="end")break;
        insert_at_tail(head,tail,str);
    }
    int n;
    cin>>n;
    n++;
    while(n--)
    {
        string inpt;
        getline(cin,inpt);
        if(inpt[0]=='v')
        {
            reverse(inpt.begin(),inpt.end());
            for(int i=0;i<6;i++)
            {
                inpt.pop_back();
            }
            reverse(inpt.begin(),inpt.end());
            find_str(head,inpt,trac);
            //cout<<trac->val<<"Tamim"<<endl;
        }
        else if(inpt=="prev")
        {
           // cout<<"Tamim"<<endl;
            if(trac->prev==NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else 
            {
                trac=trac->prev;
                cout<<trac->val<<endl;
            }
        }
        else if(inpt=="next")
        {
            if(trac->next==NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else 
            {
                trac=trac->next;
                cout<<trac->val<<endl;
            }
        }
    }
    //print(head);
    
    return 0;
}