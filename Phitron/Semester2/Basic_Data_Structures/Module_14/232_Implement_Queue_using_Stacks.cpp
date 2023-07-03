class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> newST;
        int last_element;

        while (!st.empty())
        {
            int val = st.top();
            st.pop();
            if (st.empty())
            {
                last_element = val;
                break;
            }
            newST.push(val);
        }

        while (!newST.empty())
        {
            st.push(newST.top());
            newST.pop();
        }

        return last_element;
    }

    int peek()
    {
        stack<int> newST;
        int last_element;

        while (!st.empty())
        {
            int val = st.top();
            st.pop();
            if (st.empty())
            {
                last_element = val;
            }
            newST.push(val);
        }

        while (!newST.empty())
        {
            st.push(newST.top());
            newST.pop();
        }
        return last_element;
    }

    bool empty()
    {
        if (st.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */