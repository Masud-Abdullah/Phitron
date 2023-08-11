// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7;
// vector<vector<int>> adj(N);
// bool visited[N];
// vector<int> traverse;
// void dfs(int u)
// {
//     visited[u] = true;
//     for (auto v : adj[u])
//     {
//         if (!visited[v])
//         {
//             traverse.push_back(v);
//             dfs(v);
//         }
//     }
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 1; i <= m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     traverse.push_back(1);

//     dfs(1);

//     reverse(traverse.begin(), traverse.end());
//     for (int i = 0; i < m; i++)
//     {
//         cout << traverse[i] << " ";
//     }
//     cout << '\n';

//     return 0;
// }

// Asif Abdullah and Shahrul Islam Sayem's code Idea
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<vector<int>> adj(N);
bool visited[N];
void dfs(int u)
{
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
    cout << u << " ";
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    return 0;
}