#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> adj(N);
// bool visited[N];
// int level[N];

void bfs(int s, int path[])
{
    queue<int> q;
    bool visited[N];

    q.push(s);
    memset(visited, false, sizeof(visited));
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                path[v] = path[u] + 1;
            }
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

    int q;
    cin >> q;
    while (q--)
    {
        int s, d;
        cin >> s >> d;

        int path[N];
        memset(path, 0, sizeof(path));

        bfs(s, path);
        if (path[d] != 0 || s == d)
            cout << path[d] << '\n';
        else
            cout << -1 << '\n';
    }
    
    return 0;
}