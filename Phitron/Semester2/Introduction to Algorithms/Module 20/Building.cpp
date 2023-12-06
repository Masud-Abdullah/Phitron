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

    long long int sum = 0;
    for (auto val : ans)
    {
        sum += val.w;
    }

    if (ans.size() != n - 1)
        cout << -1 << endl;
    else
        cout << sum << endl;
    return 0;
}