#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int dist[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    dist[source] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << parent << '\n';
        for (auto child : adj[parent])
        {
            if (!visited[child])
            {
                visited[child] = true;
                dist[child] = dist[parent] + 1;
                q.push(child);
            }
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

    bfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " : " << dist[i] << '\n';
    }

    return 0;
}

/*
5 4    //node and edge
1 2
1 3
2 4
4 5
*/