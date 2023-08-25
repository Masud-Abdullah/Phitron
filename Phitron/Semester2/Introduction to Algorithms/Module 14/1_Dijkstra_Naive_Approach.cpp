#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1e5 + 5;
const int INF = INT_MAX;
vector<pii> adj[N];
int dist[N];

void dijkstra(int source) // O(Nodes*Edges) //O(N*E)
{
    queue<int> q;
    q.push(source);
    dist[source] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (auto child : adj[parent]) // for(pair<int,int> child:adj[parent])
        {
            if (dist[parent] + child.second < dist[child.first])
            {
                dist[child.first] = dist[parent] + child.second;
                q.push(child.first);
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

    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    dijkstra(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of Node " << i << " : " << dist[i] << '\n';
    }

    return 0;
}

// Pathan Vai Approach fro Sayem
/*
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int, int>> v[N];
int dist[N];

void dijkstra(int s){
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int i=0; i<v[parent].size(); i++){
            // pair<int,int> child = v[parent][i];
            // int ChildNode = child.first;
            // int ChildCost = child.second;

            int childNode = v[parent][i].first;
            int childCost = v[parent][i].second;

            if(dist[parent] + childCost < dist[childNode]){
                dist[childNode] = dist[parent] + childCost;
                q.push(childNode);
            }
        }
    }
}

int main()
{
    int n, e, i;
    cin >> n >> e;

    while(e--){
        int a, b, w;
        cin >> a >> b >> w;

        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }

    for(i=1; i<=n; i++){
        dist[i] = INT_MAX;
    }

    dijkstra(1);

    for(i=1; i<=n; i++){
        cout << "Distance of " << i << ": " << dist[i] << endl;
    }

    return 0;
}
*/