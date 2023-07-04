#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }

    queue<int>q;
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }

    if(st.size()!=q.size())
    {
        cout<<"NO\n";
        return 0;
    }

    bool f = true;
    for(int i=1;i<n;i++)
    {
        int x=st.top();
        int y=q.front();
        if(x!=y)
        {
            f = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if(f)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}