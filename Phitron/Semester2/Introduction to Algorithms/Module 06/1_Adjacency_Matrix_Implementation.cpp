#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int adjmat[N][N];
int main()
{
    int n, m; // number of nodes (n) and number of edges (m)
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1; // undirect hole ei line dite hoy
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjmat[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}

//-------------- For weighted graph---------------
/*
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int adjmat[N][N];
int main()
{
    int n, m; // number of nodes (n) and number of edges (m)
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjmat[u][v] = w;
        adjmat[v][u] = w; // undirect hole ei line dite hoy
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjmat[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
*/