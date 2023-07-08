#include <bits/stdc++.h>
using namespace std;
void magicalColor(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == 'R')
        {
            if (!st.empty())
            {
                if (st.top() == 'R')
                {
                    st.pop();
                }
                else if (st.top() == 'B')
                {
                    st.pop();
                    st.push('P');
                }
                else if (st.top() == 'G')
                {
                    st.pop();
                    st.push('Y');
                }
                else
                    st.push('R');
            }
            else
                st.push('R');
        }
        else if (c == 'G')
        {
            if (!st.empty())
            {
                if (st.top() == 'G')
                {
                    st.pop();
                }
                else if (st.top() == 'R')
                {
                    st.pop();
                    st.push('Y');
                }
                else if (st.top() == 'B')
                {
                    st.pop();
                    st.push('C');
                }
                else
                    st.push('G');
            }
            else
                st.push('G');
        }
        else if (c == 'B')
        {
            if (!st.empty())
            {
                if (st.top() == 'B')
                {
                    st.pop();
                }
                else if (st.top() == 'R')
                {
                    st.pop();
                    st.push('P');
                }
                else if (st.top() == 'G')
                {
                    st.pop();
                    st.push('C');
                }
                else
                    st.push('B');
            }
            else
                st.push('B');
        }
    }
    string tp;
    while (!st.empty())
    {
        tp.push_back(st.top());
        st.pop();
    }

    for (char c : tp)
    {
        if (!st.empty())
        {
            if (c == st.top())
            {
                st.pop();
            }
            else
                st.push(c);
        }
        else
            st.push(c);
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        magicalColor(s);
    }
    return 0;
}