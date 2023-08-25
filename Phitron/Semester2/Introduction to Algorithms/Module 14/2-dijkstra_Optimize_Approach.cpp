#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1e5 + 5;
const int INF = INT_MAX;
vector<pii> adj[N];
int dist[N];

void dijkstra(int source)
{
    queue<int> q;
    q.push(source);
    dist[source] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (auto child : adj[parent])
        {
            if (dist[parent] + child.second < dist[child.first])
            {
                dist[child.first] = dist[parent] + child.second;
                q.push(child.first);
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
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    dijkstra(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of Node " << i << " : " << dist[i] << '\n';
    }

    return 0;
}
