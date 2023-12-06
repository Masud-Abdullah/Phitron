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

class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    vector<Edge> v;
    vector<Edge> ans;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
    {
        int a = v[i].a;
        int b = v[i].b;
        int w = v[i].w;
        int leaderA = dsu_findLeader(a);
        int leaderB = dsu_findLeader(b);

        if (leaderA == leaderB)
            continue;
        ans.push_back(Edge(a, b, w));
        dsu_union(a, b);
    }

    for (auto val : ans)
    {
        cout << val.a << " " << val.b << " " << val.w << endl;
    }
    return 0;
}
/*
7 11
1 2 5 
1 3 7 
3 2 9 
3 5 8 
5 6 5 
3 6 7 
3 6 7 
2 4 6 
2 6 15
4 6 8 
4 7 11
*/