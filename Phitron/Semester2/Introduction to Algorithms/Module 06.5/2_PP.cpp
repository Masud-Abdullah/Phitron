#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int adj[N][N];
vector<vector<int>> adjList(N);
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> adj[i][j];
            if (adj[i][j] == 1)
                adjList[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        for (auto v : adjList[i])
        {
            cout << v << " ";
        }
        cout << '\n';
    }

    return 0;
}