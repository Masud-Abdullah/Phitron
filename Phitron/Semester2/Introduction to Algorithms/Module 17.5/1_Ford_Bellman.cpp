#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    int dist[n + 1];
    vector<Edge> ans;
    for (int i = 1; i <= n; i++)
        dist[i] = INT_MAX;

    dist[1] = 0;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Edge ed(u, v, w);
        ans.push_back(ed);
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int u = ans[j].u;
            int v = ans[j].v;
            int w = ans[j].w;
            if (dist[u] < INT_MAX && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INT_MAX)
            cout << 30000 << " ";
        else
            cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}