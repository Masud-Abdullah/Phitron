/*
Folyd Warshall a negative cycle detect korar rule:
jodi source theke source a ashar distance kome jay tahole bujhte hobe je ekhane negative cycle ache.
*/

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e7;
int main()
{
    int n, e;
    cin >> n >> e;
    int dist[n + 1][n + 1];
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
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
                cout << "INf ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

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

    cout << endl << "After Applying Floyd Warshall: " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
                cout << "INf ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

/*
Input
4 6
1 2 3
2 1 2
1 4 5
4 3 2
3 2 1
2 4 4
*/

/*
Output
Updated
0 3 7 5
2 0 6 4
3 1 0 5
5 3 2 0
*/