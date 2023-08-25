#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1e5 + 5;
const int INF = INT_MAX;
vector<pii> adj[N];
vector<int> dist(N, INF);
bool visited[N];

void dijkstra(int source) // O(Nodes+Edges*logNodes) //O(N+ELogN)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[source] = 0;
    pq.push({dist[source], source}); // pq.push({0,source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        if (visited[u])
            continue;
        visited[u] = true;

        for (auto vPair : adj[u])
        {
            int v = vPair.first;
            int w = vPair.second;

            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dijkstra(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of Node : " << dist[i] << endl;
    }

    return 0;
}

// Pathan Vai's Code from Asif Abdullah
//  #include <bits/stdc++.h>
//  using namespace std;

// const int N = 1e5+5;
// vector<pair<int,int>> v[N];
// int dist[N];
// bool visited[N];

// void dijkstra(int s)  //O(Nodes+Edges*logNodes) //O(N+ELogN)
// {
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//     pq.push({0,1});
//     dist[s] = 0;

//     while (!pq.empty())
//     {
//         pair<int,int> parent = pq.top();
//         pq.pop();

//         int ParentNode = parent.second;

//         if(visited[ParentNode]) continue;

//         visited[ParentNode] = true;

//         int parentCost = parent.first;

//         for (int i = 0; i < v[ParentNode].size(); i++)
//         {
//             int childNode = v[ParentNode][i].first;
//             int childCost = v[ParentNode][i].second;

//             if(parentCost+childCost<dist[childNode])
//             {
//                 dist[childNode] = parentCost +childCost;
//                 pq.push({dist[childNode],childNode});
//             }
//         }

//     }

// }

// int main()
// {
//     int n,e;
//     cin >> n >> e;

//     while (e--)
//     {
//         int a,b,w;
//         cin >> a >> b >> w;

//         v[a].push_back({b,w});
//         v[b].push_back({a,w});
//     }

//     for (int i = 1; i <=N; i++)
//     {
//         dist[i] = INT_MAX;
//     }

//     dijkstra(1);

//     for (int i = 1; i <=n; i++)
//     {
//         cout << "Distance of " << i << ": " << dist[i] << endl;
//     }

//     return 0;
// }
