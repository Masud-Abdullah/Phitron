#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long int INF = 1e18;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll dist[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dist[i][j] = INF;
            if (i == j)
                dist[i][j] = 0;
        }
    }

    while (e--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll s, d;
        cin >> s >> d;
        if (dist[s][d] == INF)
            cout << -1 << endl;
        else
            cout << dist[s][d] << endl;
    }

    return 0;
}
