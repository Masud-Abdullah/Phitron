#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> adj(N);
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    // level[s] = 0;   eta na korleo cholbe karon initially shobai zero thakbe.
    while (!q.empty())
    {
        // Pop the first node from the queue and insert their neighbours to the queue
        int u = q.front(); // 'u' variable for storing the front element of the queue
        q.pop();
        cout << "Vsisting Node " << u << ": " << '\n'; // visitig node u
        for (auto v : adj[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[u] + 1;
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

    bfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Level of " << i << ": " << level[i] << '\n';
    }
    return 0;
}
/*
12
11
1 2
1 3
1 10
2 4
2 5
3 9
10 11
10 12
5 6
5 7
7 8
*/