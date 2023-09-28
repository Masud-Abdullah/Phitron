#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int n, m;
const int N = 1e3 + 5;
bool visited[N][N];
int dist[N][N];
vector<pii> path = {{-1, -2}, {-2, -1}, {1, -2}, {2, -1}, {-1, 2}, {-2, 1}, {1, 2}, {2, 1}};
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
    visited[sI][sJ] = true;
    dist[sI][sJ] = 0;

    while (!q.empty())
    {
        pii parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int cI = pI + path[i].first;
            int cJ = pJ + path[i].second;
            if (isValid(cI, cJ) && !visited[cI][cJ])
            {
                q.push({cI, cJ});
                dist[cI][cJ] = dist[pI][pJ] + 1;
                visited[cI][cJ] = true;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int kI, kJ;
        cin >> kI >> kJ;
        int qI, qJ;
        cin >> qI >> qJ;
        bfs(kI, kJ);

        if (visited[qI][qJ])
            cout << dist[qI][qJ] << endl;
        else
            cout << -1 << endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dist[i][j] = 0;
                visited[i][j] = false;
            }
        }
    }

    return 0;
}