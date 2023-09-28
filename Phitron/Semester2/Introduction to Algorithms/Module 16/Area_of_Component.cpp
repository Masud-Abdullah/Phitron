#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int n, m, cnt = 0;
const int N = 1e3 + 5;
char a[N][N];
bool visited[N][N];
vector<pii> path = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && a[cI][cJ] == '.')
        return true;
    else
        return false;
}
void dfs(int sI, int sJ)
{
    visited[sI][sJ] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        pii p = path[i];
        int cI = sI + p.first;
        int cJ = sJ + p.second;

        if (isValid(cI, cJ) && !visited[cI][cJ])
        {
            dfs(cI, cJ);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && a[i][j] == '.')
            {
                cnt = 0;
                dfs(i, j);
                mn = min(mn, cnt);
            }
        }
    }
    if (mn == INT_MAX)
        cout << -1 << endl;
    else
        cout << mn << endl;
    return 0;
}