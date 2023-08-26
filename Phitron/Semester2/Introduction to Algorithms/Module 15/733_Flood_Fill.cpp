class Solution
{
public:
    int n, m;
    bool visited[100][100];
    vector<pair<int, int>> path = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
    bool isValid(int cI, int cJ)
    {
        if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
            return true;
        else
            return false;
    }
    void dfs(int sI, int sJ, int sclr, int clr, vector<vector<int>> &image)
    {
        visited[sI][sJ] = true;
        if (image[sI][sJ] == sclr)
            image[sI][sJ] = clr;

        for (int i = 0; i < 4; i++)
        {
            pair<int, int> p = path[i];
            int cI = sI + p.first;
            int cJ = sJ + p.second;
            if (isValid(cI, cJ) && !visited[cI][cJ] && image[cI][cJ] == sclr)
            {
                dfs(cI, cJ, sclr, clr, image);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        n = image.size();
        m = image[0].size();
        dfs(sr, sc, image[sr][sc], color, image);
        return image;
    }
};