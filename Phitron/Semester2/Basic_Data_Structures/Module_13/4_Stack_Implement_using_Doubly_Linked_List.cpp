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
int main()
{
    myStack st;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty()) //(st.empty()==true) or (st.empty())  ei duita same
    {                   //(st.empty==false) or (!st.empty()) ei duita same
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}