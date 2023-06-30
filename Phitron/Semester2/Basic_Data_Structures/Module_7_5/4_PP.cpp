/*
Question: Take a singly linked list as input, then print the maximum value of them.
*/
/*
Question: Take a singly linked list as input and print the reverse of the linked list.

*/

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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int maximum=INT_MIN;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;

        maximum = max(maximum,val);
        insert_at_tail(head, tail, val);
    }
    cout<<maximum<<endl;
    cout << endl;

    return 0;
}