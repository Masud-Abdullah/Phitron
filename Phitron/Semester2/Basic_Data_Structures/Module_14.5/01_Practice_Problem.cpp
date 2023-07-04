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
        this->next = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    myStack st1, st2;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (st1.size() != st2.size())
    {
        cout << "NO\n";
        return 0;
    }

    bool f = true;
    Node *tm1 = st1.head;
    Node *tm2 = st2.head;

    for (int i = 1; i <= n; i++)
    {
        if (tm1->val != tm2->val)
        {
            f = false;
            break;
        }
        tm1 = tm1->next;
        tm2 = tm2->next;
    }

    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}