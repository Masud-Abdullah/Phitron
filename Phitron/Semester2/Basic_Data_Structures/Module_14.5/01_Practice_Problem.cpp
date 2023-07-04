#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail; // O(1)
        tail = tail->prev;
        if (tail == NULL)
        {
            head == NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top()
    {
        return tail->val; // O(1)
    }
    int size()
    {
        return sz; // O(1)
    }
    bool empty()
    {
        if (sz == 0)
            return true; // O(1)
        else
            return false;
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

    while (!st1.empty())
    {
        if (st1.top() != st2.top())
        {
            f = false;
            break;
        }
        st1.pop();
        st2.pop();
    }

    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}