#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int parent[N];
int parentLevel[N];
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
void dsu_union(int a, int b)
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
        else if (parentLevel[leaderB] > parentLevel[leaderA])
        {
            // B Leader
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
    int count = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_findLeader(a);
        int leaderB = dsu_findLeader(b);
        if (leaderA == leaderB)
            count++;
        dsu_union(a, b);
    }
    cout << count << endl;
    return 0;
}