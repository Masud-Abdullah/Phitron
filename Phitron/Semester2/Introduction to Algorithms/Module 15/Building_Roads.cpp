#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
vector<int> ans;

void dfs(int source)
{
    visited[source] = true;
    for (auto v : adj[source])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            ans.push_back(i);
            dfs(i);
        }
    }
    cout << ans.size() - 1 << endl;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << " " << ans[i + 1] << endl;
    }

    return 0;
}