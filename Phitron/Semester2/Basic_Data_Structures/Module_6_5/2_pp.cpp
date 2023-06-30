//Question: Take a singly linked list as input and check if the linked list contains any duplicate value. 
//You can assume that the maximum value will be 100.
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
    int a[101]={0};
    while (true)
    {
        int val;
        cin >> val;
        if(val==-1)break;

        a[val]++;
        Insert_at_Tail(head, val);
    }

    bool f=false;
    for(int i=1;i<=100;i++)
    {
        if(a[i]>1)
        {
            f=true;
            break;
        }
    }

    if(f)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}