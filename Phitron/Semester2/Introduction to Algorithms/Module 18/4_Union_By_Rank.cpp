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
    for (int i = 1; i <= e; ++i)
    {
        int a, b;
        cin >> a >> b;
        dsu_union(a, b);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << parentLevel[i] << " "; //<<parent[i]<<endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << parent[i] << " ";
    }
    cout << endl;

    cout << dsu_findLeader(5) << endl;

    return 0;
}

/*
   --> Leader ekjon hoilei hoise, union by size othoba union by rank er khetre
   same input e dui jaygay dui rokom leader ashte pare, eita somossa nai.

   --> DSU er khetre union by size othoba union by rank diye korte hoy....
   karon ei duitar complexity onek valo. Noraml union er complexty er chaite //

*/

/*
7 4
1 2
2 3
4 5
6 5
*/