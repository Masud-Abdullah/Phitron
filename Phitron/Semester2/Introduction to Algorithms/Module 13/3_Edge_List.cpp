#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edge;
    while (e--)
    {
        int u, v;
        cin >> u >> v;

        edge.push_back({u, v});
    }

    for (int i = 0; i < edge.size(); i++)
    {
        cout << edge[i].first << " " << edge[i].second << endl;
    }

    return 0;
}