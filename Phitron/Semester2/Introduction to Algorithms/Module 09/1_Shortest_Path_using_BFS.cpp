#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);

    visited[s] = true;
    level[s] = 0;
    parent[s] = -1;

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
// O(n+m);

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

    int s, d;
    cin >> s >> d;
    bfs(s);

    cout << "Distance : " << level[d] << '\n';

    // Finding Path O(n)
    vector<int> path;
    int cur = d;
    while (cur != -1)
    {
        path.push_back(cur);
        cur = parent[cur];
    }

    reverse(path.begin(), path.end());
    cout << "Path : ";
    for (auto node : path)
    {
        cout << node << " ";
    }
    cout << '\n';

    return 0;
}
/*
Output:
7
7
1 2
1 3
3 4
4 6
2 5
5 6
5 7
1
7
Distance : 3
Path : 1 2 5 7
*/