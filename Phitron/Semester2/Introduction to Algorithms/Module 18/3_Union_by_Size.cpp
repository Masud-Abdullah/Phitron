#include <bits/stdc++.h>
using namespace std;
int parent[1000];
int parentSize[1000];
void dsu_set(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
int dsu_findLeader(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_findLeader(a);
    int leaderB = dsu_findLeader(b);

    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            // A Leader
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else if (parentSize[leaderB] >= parentSize[leaderA])
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    for (int i = 1; i <= e; ++i)
    {
        int a, b;
        cin >> a >> b;
        dsu_union(a, b);
    }

    cout << dsu_findLeader(5) << endl;

    return 0;
}