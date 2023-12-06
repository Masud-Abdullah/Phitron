#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, capacity;
    cin >> n >> capacity;
    int val[n + 1], weight[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> val[i];

    for (int i = 1; i <= n; i++)
        cin >> weight[i];

    int dp[n + 1][capacity + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= capacity; j++)
        {
            if (weight[i] <= j)
            {
                dp[i][j] = max(val[i] + dp[i][j - weight[i]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][capacity] << endl;
    return 0;
}