#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int parent[N];
int parentLevel[N];
void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentLevel[i] = 0;
    }
}
int dsu_findLeader(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_findLeader(a);
    int leaderB = dsu_findLeader(b);
    if (leaderA != leaderB)
    {
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            // A Leader
            parent[leaderB] = leaderA;
        }
        else if (parentLevel[leaderB] > parentLevel[leaderA])
        {
            // B Leader
            parent[leaderA] = leaderB;
        }
        else
        {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    for (int i = 1; i <= e; i++)
    {
        int a, b;
        cin >> a >> b;
        dsu_union(a, b);
    }

    // Using map
    //  map<int, bool> mp;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      int leader = dsu_findLeader(i);
    //      mp[leader] = true;
    //  }

    // vector<int> v;
    // for (pair<int, bool> p : mp)
    // {
    //     v.push_back(p.first);
    // }

    // cout << v.size() - 1 << endl;
    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     cout << v[i] << " " << v[i + 1] << endl;
    // }

    // Using set
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        int leader = dsu_findLeader(i);
        st.insert(leader);
    }

    vector<int> v;
    for (auto val : st)
    {
        v.push_back(val);
    }

    cout << st.size() - 1 << endl;
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << " " << v[i + 1] << endl;
    }

    return 0;
}
