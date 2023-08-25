#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int source)
{
    visited[source] = true;
    cout << source << '\n';

    for (auto child : adj[source])
    {
        if (!visited[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " : ";
        for (auto it : adj[i])
        {
            cout << it << " ";
        }
        cout << '\n';
    }
    return 0;
}