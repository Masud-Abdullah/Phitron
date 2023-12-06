#include <bits/stdc++.h>
using namespace std;
int parent[1000];
int parentLevel[1000];
void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentLevel[i] = 0;
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
void dsu_Union(int a, int b)
{
    int leaderA = dsu_findLeader(a);
    int leaderB = dsu_findLeader(b);
    if (leaderA != leaderB)
    {
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            // A Leader
            parent[leaderB] = leaderA;
        }
        else if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            // B Leadeer
            parent[leaderA] = leaderB;
        }
        else
        {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    bool f = false;
    int x, y;
    for (int i = 1; i <= e; i++)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = dsu_findLeader(a);
        int leaderB = dsu_findLeader(b);

        if (leaderA == leaderB)
        {
            f = true;
            x = a;
            y = b;
        }
        else
        {
            dsu_Union(a, b);
        }
    }

    if (f)
    {
        cout << "Cycle Detected Between Node : " << x << " , " << y << endl;
    }
    else
        cout << "No Cycle" << endl;
    return 0;
}