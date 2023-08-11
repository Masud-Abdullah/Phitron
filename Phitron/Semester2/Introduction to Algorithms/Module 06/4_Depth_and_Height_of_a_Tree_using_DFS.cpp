#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<vector<int>> adj(N);
bool visited[N]; // globally declare korechi tai initially shob false thakbe.
int depth[N];
int height[N];
void dfs(int u)
{
    // Section 1: actions just after entering node u.
    visited[u] = true;
    // cout<<"Visiting Node : "<<u<<'\n';
    for (int v : adj[u])
    {
        // Section 2: actions before entering a new neighbour
        if (!visited[v])
        {
            depth[v] = depth[u] + 1;
            dfs(v);
            // if (height[v] + 1 > height[u])
            // {
            //     height[u] = height[v] + 1;
            // }
            height[u] = max(height[u], height[v] + 1);
        }
        // Section 3: actions after exiting a neighbour
    }
    // Section 4: actions before exiting node u
}
int main()
{
    int n, m; // Number of nodes = n, number of edges = m
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Depth of Node" << i << ": " << depth[i] << '\n';
    }

    cout << "***************\n";

    for (int i = 1; i <= n; i++)
    {
        cout << "Height of Node" << i << ": " << height[i] << '\n';
    }

    return 0;
}