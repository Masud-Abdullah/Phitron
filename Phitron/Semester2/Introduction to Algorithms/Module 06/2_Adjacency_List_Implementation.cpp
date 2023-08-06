// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// vector<vector<int>> adj(N);
// int main()
// {
//     int n, m;        // number of nodes (n) and number of edges (m)
//     cin >> n >> m;
//     for (int i = 1; i <= m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         // adj[v].push_back(u);     // undirect hole ei line dite hoy
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         cout << "List " << i << ": ";
//         for (auto j : adj[i])
//         {
//             cout << j << " ";
//         }
//         cout << '\n';
//     }
//     return 0;
// }

//-------------- For weighted graph---------------
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<vector<pair<int, int>>> adj(N);
int main()
{
    int n, m;
    cin >> n >> m; // number of nodes (n) and number of edges (m)
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        // adj[v].push_back({u,w});     // undirect hole ei line dite hoy
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        for (auto j : adj[i])
        {
            cout << " (" << j.first << "," << j.second << "),";
        }
        cout << '\n';
    }
    return 0;
}