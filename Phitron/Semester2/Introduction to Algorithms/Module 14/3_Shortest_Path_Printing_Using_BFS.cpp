#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);

    visited[source] = true;
    level[source] = 0;
    parent[source] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : adj[u])
        {
            if (visited[v])
                continue;

            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
            parent[v] = u;
        }
    }
}
// O(n+e)
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

    bfs(1);

    int d;
    cin >> d;
    if (visited[d])
    {
        vector<int> path;
        int x = d;
        while (x != -1)
        {
            path.push_back(x);
            x = parent[x];
        }
        reverse(path.begin(), path.end());
        for (auto val : path)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    else
        cout << "Path Nai\n";

    return 0;
}