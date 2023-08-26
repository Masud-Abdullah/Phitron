#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int n, m;
const int N = 1e3 + 5;
bool visited[N][N];
int dist[N][N];
vector<pii> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
        return true;
    else
        return false;
}

void bfs(int sI, int sJ)
{
    queue<pii> q;
    q.push({sI, sJ});
    dist[sI][sJ] = 0;
    visited[sI][sJ] = true;

    while (!q.empty())
    {
        pii parent = q.front();
        q.pop();
        int pI = parent.first;
        int pJ = parent.second;

        for (int i = 0; i < 4; i++)
        {
            pii p = path[i];

            int cI = pI + p.first;
            int cJ = pJ + p.second;

            if (isValid(cI, cJ) && !visited[cI][cJ])
            {
                visited[cI][cJ] = true;
                dist[cI][cJ] = dist[pI][pJ] + 1;
                q.push({cI, cJ});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    char a[n + 1][m + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    int sI, sJ;
    cin >> sI >> sJ;
    bfs(sI, sJ);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}