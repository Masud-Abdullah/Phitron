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
{ // Bellman Ford er // Complexity: O(N*E)
    int n, e;
    cin >> n >> e;
    vector<Edge> ans;
    for (int i = 1; i <= e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        Edge ed(u, v, w);
        ans.push_back(ed);
        // cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }

    int dist[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[1] = 0; // Source holo 1. Tai source er distance 0 kore deua hoise //

    for (int i = 1; i <= n - 1; i++) // koto bar (n-1) relaxation hobe sheitar jonno ei loop //
    {                                // Complexity: O(N*E)
        for (int j = 0; j < ans.size(); j++)
        {
            Edge ed = ans[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    bool cycle = false;
    for (int j = 0; j < ans.size(); j++)
    {
        Edge ed = ans[j];
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;

        if (dist[u] + w < dist[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
        cout << "Negative Cycle Detected" << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "Node " << i << " : " << dist[i] << endl;
        }
    }
    return 0;
}
/*
Output:
3 3
1 2 2
3 1 -1
2 3 -3
*/