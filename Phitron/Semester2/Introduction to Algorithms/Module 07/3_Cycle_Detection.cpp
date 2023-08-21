#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<vector<int>> adj(N);
int visited[N];
bool flag = false;
int cnt = 0;

bool dfs(int u)
{
    visited[u]++;
    for (auto v : adj[u])
    {
        if (visited[v])
        {
            flag = true;
            if (visited[v] == 1)
            {
                cnt++;
                //visited[v]++;
                cout << u << " " << v << '\n';
            }
            continue;
        }
        dfs(v);
    }
    visited[u]++;
    //cout<<"Exit: "<<u<<endl;
    return flag;
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // ekhetre ami directed graph niyechi. tahole ar parent /child track rakha lage na.
        // adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        dfs(i);
    }

    // for(int i=1;i<=n;i++)
    // {
    //     cout<<i<<" : "<<endl;
    //     for(int j=0;j<adj[i].size();j++)
    //     {
    //         cout<<(adj[i])[j]<<" ";
    //     }
    //     cout<<endl;
    // }

    if (flag)
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle\n";

    cout << "Number of Cycle is = " << cnt << '\n';

    return 0;
}
