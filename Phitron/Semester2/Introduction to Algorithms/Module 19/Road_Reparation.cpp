// Using Prims Algorithm

// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 7;
// typedef pair<int, int> pii;
// vector<pii> v[N];
// bool visited[N];
// long long int cnt, sum;

// class Edge
// {
// public:
//     int a, b, w;
//     Edge(int a, int b, int w)
//     {
//         this->a = a;
//         this->b = b;
//         this->w = w;
//     }
// };
// class cmp
// {
// public:
//     bool operator()(Edge a, Edge b)
//     {
//         return a.w > b.w;
//     }
// };
// void prims(int s, int n)
// {
//     priority_queue<Edge, vector<Edge>, cmp> pq;
//     pq.push(Edge(s, s, 0));
//     vector<Edge> edgeList;

//     while (!pq.empty())
//     {
//         Edge parent = pq.top();
//         pq.pop();

//         int a = parent.a;
//         int b = parent.b;
//         int w = parent.w;

//         if (visited[b])
//             continue;
//         visited[b] = true;
//         cnt++;
//         edgeList.push_back(parent);

//         for (int i = 0; i < v[b].size(); i++)
//         {
//             pii child = v[b][i];

//             int childNode = child.first;
//             int childCost = child.second;

//             if (visited[childNode])
//                 continue;
//             pq.push(Edge(b, childNode, childCost));
//         }
//     }

//     if (cnt != n)
//         cout << "IMPOSSIBLE" << endl;
//     else
//     {
//         for (int i = 0; i < edgeList.size(); i++)
//         {
//             sum += edgeList[i].w;
//         }
//         cout<<sum<<endl;
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b, w;
//         cin >> a >> b >> w;
//         v[a].push_back({b, w});
//         v[b].push_back({a, w});
//     }
//     prims(1, n);

//     return 0;
// }

// Using Kruskaqls ALgorithm
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
        cout << "IMPOSSIBLE" << endl;
    else
        cout << sum << endl;
    return 0;
}
/*
5 6
1 2 3
2 3 5
2 4 2
3 4 8
5 1 7
5 4 4
*/