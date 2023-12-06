#include <bits/stdc++.h>
using namespace std;
const long long int INF = 1e18;
typedef long long int ll;
bool cycle;
class Edge
{
public:
    ll u;
    ll v;
    ll w;
    Edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    ll n, e;
    cin >> n >> e;
    vector<Edge> ans;
    for (int i = 1; i <= e; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        Edge ed(u, v, w);
        ans.push_back(ed);
    }
    ll dist[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dist[i] = INF;
    }
    ll s;
    cin >> s;
    dist[s] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            Edge ed = ans[j];
            ll u = ed.u;
            ll v = ed.v;
            ll w = ed.w;

            if (dist[u] != INF && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    for (int j = 0; j < ans.size(); j++)
    {
        Edge ed = ans[j];
        ll u = ed.u;
        ll v = ed.v;
        ll w = ed.w;

        if (dist[u] != INF && dist[u] + w < dist[v])
        {
            cycle = true;
            break;
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll d;
        cin >> d;
        if (!cycle)
        {
            if (dist[d] == INF)
                cout << "Not Possible" << endl;
            else
                cout << dist[d] << endl;
        }
    }
    if (cycle)
        cout << "Negative Cycle Detected" << endl;

    return 0;
}
