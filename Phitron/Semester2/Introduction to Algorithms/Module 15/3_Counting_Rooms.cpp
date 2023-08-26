#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

const int N = 1e3 + 5;
int n, m;
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
    for (int i = 0; i < 4; i++)
    {
        pii p = path[i];
        int cI = sI + p.first;
        int cJ = sJ + p.second;
        if (isValid(cI, cJ) && !visited[cI][cJ])
        {
            visited[cI][cJ] = true;
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

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && a[i][j] == '.')
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << endl;

    return 0;
}


// ------------------------------------------------------------------------ //

// BFS //

/*
#include<bits/stdc++.h>
#define  pii  pair<int, int>
using namespace std;

int n, m;
const int N = 1e3+5;
bool visited[N][N];
char a[N][N];
vector<pii> path = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool isValid(int cI, int cJ){
    if(cI>=0 && cI<n && cJ>=0 && cJ<m && a[cI][cJ] == '.'){
        return true;
    }
    else{
        return false;
    }
}

void bfs(int si, int sj){
    queue<pii> q;
    q.push({si, sj});

    visited[si][sj] = true;

    while(!q.empty()){
        pii parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;
        q.pop();

        for(int i=0; i<4; i++){
            pii p = path[i];

            int cI = p.first + pI;
            int cJ = p.second + pJ;

            if(isValid(cI, cJ)){
                if(visited[cI][cJ] == false){
                    visited[cI][cJ] = true;
                    q.push({cI, cJ});
                }
            }
        }
    }
}

int main()
{
    int i, j;
    cin >> n >> m;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(visited[i][j] == false && a[i][j] == '.'){
                cnt++;
                bfs(i, j);
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
*/