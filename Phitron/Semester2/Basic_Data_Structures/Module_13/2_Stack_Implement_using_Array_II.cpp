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
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while(st.empty()==false)   //(st.empty()==true) or (st.empty())  ei duita same
    {                           //(st.empty==false) or (!st.empty()) ei duita same
        cout<<st.top()<<endl;  
        st.pop();
    }
    return 0;
}