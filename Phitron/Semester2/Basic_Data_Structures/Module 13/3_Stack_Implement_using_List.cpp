#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> lst;
    void push(int val)
    {
        lst.push_back(val); // O(1)
    }
    void pop()
    {
        lst.pop_back(); // O(1)
    }
    int top()
    {
        return lst.back(); // O(1)
    }
    int size()
    {
        return lst.size(); // O(1)
    }
    bool empty()
    {
        if (lst.size() == 0)
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