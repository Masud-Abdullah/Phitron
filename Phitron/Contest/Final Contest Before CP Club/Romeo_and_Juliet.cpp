#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 1e5 + 7;
vector<int> graph[N];
bool check[N];
int dis[N];
int parent[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);

    check[source] = true;
    dis[source] = 0;
    parent[source] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : graph[u])
        {
            if (check[v])
                continue;

            q.push(v);
            check[v] = true;
            dis[v] = dis[u] + 1;
            parent[v] = u;
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
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int x, y, k;
    cin >> x >> y >> k;

    bfs(x);
    // dis[y]%=k;
    // dis[y] != 0 && check[y] == true
    if ((dis[y] + 1) / 2 <= k && check[y] == true) //&& dis[y] / k <= k
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}