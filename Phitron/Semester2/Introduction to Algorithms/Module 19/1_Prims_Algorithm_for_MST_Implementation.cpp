#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e5 + 7;
vector<pii> v[N];
bool visited[N];

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
class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w; // a.w jodi b.w er theke boro hoy tahole swap kore dibe (choto theke boro swap er jonno) //
    }
};

void prims(int s)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;
    pq.push(Edge(s, s, 0));

    vector<Edge> edgeList;

    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();

        int a = parent.a;
        int b = parent.b;
        int w = parent.w;

        if (visited[b])
            continue;

        edgeList.push_back(parent);
        visited[b] = true;

        for (int i = 0; i < v[b].size(); i++)
        {
            pair<int, int> child = v[b][i];

            int childNode = child.first;
            int childCost = child.second;

            if (visited[childNode] == false)
            {
                pq.push(Edge(b, childNode, childCost));
            }
        }
    }

   // edgeList.erase(edgeList.begin());
    cout << endl;
    for (auto val : edgeList)
    {
        cout << val.a << " " << val.b << " " << val.w << endl;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }
    prims(1);
    return 0;
}

/*
Input:
8 11
1 5 2
1 2 4
1 4 10  
2 4 8
2 3 18
3 4 11
4 7 11
4 8 9
4 5 5
6 7 1
6 8 2
*/