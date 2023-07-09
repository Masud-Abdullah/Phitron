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
        if (head == NULL) // O(1)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
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
class myQueue
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
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    list<int> lst1;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        lst1.push_back(x);
    }

    myStack S;

    while (!lst1.empty())
    {
        S.push(lst1.back());
        lst1.pop_back();
    }

    while (!S.empty())
    {
        lst1.push_back(S.top());
        S.pop();
    }

    list<int> lst2;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        lst2.push_back(x);
    }

    myQueue Q;

    while (!lst2.empty())
    {
        Q.push(lst2.back());
        lst2.pop_back();
    }

    while (!Q.empty())
    {
        lst2.push_back(Q.front());
        Q.pop();
    }

    if (lst1 == lst2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
