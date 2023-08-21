#include <bits/stdc++.h>
using namespace std;

const int MX = 1e5 + 5;
vector<vector<int>> adj(MX);
bool visited[MX];
int ans = -1;

void dfs(int u)
{
    if (!visited[u])
    {
        ans++;
        visited[u] = true;
    }
    for (auto v : adj[u])
    {
        if (visited[v])
            continue;
        dfs(v);
    }
}
int main()
{
    int N, E;
    cin >> N >> E;
    for (int i = 1; i <= E; i++)
    {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
    }
    int K;
    cin >> K;

    dfs(K);

    cout << ans << '\n';
    return 0;
}