#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<vector<int>> adj(N);
bool visited[N];
int cnt = 0;

void dfs(int u)
{
    cnt++;
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (visited[v])
            continue;
        dfs(v);
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

    vector<int> ans;
    for (int i = 0; i <= 1000; i++)
    {
        if (visited[i])
            continue;
        cnt = 0;
        dfs(i);
        if (cnt > 1)
            ans.push_back(cnt);
    }

    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
    

    return 0;
}