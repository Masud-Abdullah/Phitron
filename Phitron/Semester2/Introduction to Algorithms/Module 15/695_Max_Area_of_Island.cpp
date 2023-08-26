// class Solution
// {
// public:
//     int n, m, cnt;
//     bool visited[100][100];
//     vector<pair<int, int>> path = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
//     bool isValid(int cI, int cJ)
//     {
//         if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
//             return true;
//         else
//             return false;
//     }
//     void dfs(int sI, int sJ, vector<vector<int>> &grid)
//     {
//         visited[sI][sJ] = true;
//         cnt++;
//         for (int i = 0; i < 4; i++)
//         {
//             pair<int, int> p = path[i];
//             int cI = p.first + sI;
//             int cJ = p.second + sJ;
//             if (isValid(cI, cJ) && !visited[cI][cJ] && grid[cI][cJ] == 1)
//             {
//                 dfs(cI, cJ, grid);
//             }
//         }
//     }
//     int maxAreaOfIsland(vector<vector<int>> &grid)
//     {
//         n = grid.size();
//         m = grid[0].size();
//         int mx = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (!visited[i][j] && grid[i][j] == 1)
//                 {
//                     cnt = 0;
//                     dfs(i, j, grid);
//                     mx = max(mx, cnt);
//                 }
//             }
//         }
//         return mx;
//     }
// };
