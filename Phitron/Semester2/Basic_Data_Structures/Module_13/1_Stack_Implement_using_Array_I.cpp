#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val); // O(1)
    }
    void pop()
    {
        v.pop_back(); // O(1)
    }
    int top()
    {
        return v.back(); // O(1)
    }
    int size()
    {
        return v.size(); // O(1)
    }
    bool empty()
    {
        if (v.size() == 0)
            return true; // O(1)
        else
            return false;
    }
};
int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    if (st.empty() == true)
    {
        cout << "Invalid\n";
    }
    else
    {
        cout << st.top() << endl;
    }
    return 0;
}