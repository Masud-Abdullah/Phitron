#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<vector<int>> adj(N);
bool visited[N];
int height[N];

void dfs(int u)
{
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
            height[u] = max(height[u], height[v] + 1);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    int H;
    cin >> H;
    cout << "Height of " << H << " = " << height[H] << '\n';

    return 0;
}