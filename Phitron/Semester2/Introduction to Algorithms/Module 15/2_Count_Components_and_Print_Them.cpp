#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
vector<int> component;

void dfs(int source)
{
    visited[source] = true;
    component.push_back(source);
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
    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int connectedComponents = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            connectedComponents++;
            dfs(i);
            for (int i = 0; i < component.size(); i++)
            {
                cout << component[i] << " ";
            }
            cout << endl;
            component.clear();
        }
    }
    cout << connectedComponents << endl;
    return 0;
}