#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> adj(N);
bool visited[N];
pair<int, int> level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
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
                level[v].first = level[u].first + 1;
                level[v].second = v;
            }
        }
    }
}
int main()
{
    int n, m, root = INT_MAX;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        root = min({u, v, root});
    }

    int L;
    cin >> L;

    bfs(root);

    vector<int> ans;
    for (int i = 0; i < N; i++)
    {
        if (level[i].first == L)
            ans.push_back(level[i].second);
    }

    sort(ans.begin(), ans.end());

    if (L == 0)
        cout << 0 << '\n';
    else if (ans.size() != 0)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    else
        cout << -1 << '\n';

    return 0;
}
