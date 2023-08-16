#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> adj(N);
bool visited[N];
bool flag = false;

bool dfs(int u)
{
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (visited[v])
        {
            flag = true;
            continue;
        }
        dfs(v);
    }
    return flag;
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // ekhetre ami directed graph niyechi. tahole ar parent /child track rakha lage na.
        // adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        dfs(i);
    }

    if (flag)
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle\n";

    // cout << "Number of Connected Components is = " << cc << '\n';

    return 0;
}
