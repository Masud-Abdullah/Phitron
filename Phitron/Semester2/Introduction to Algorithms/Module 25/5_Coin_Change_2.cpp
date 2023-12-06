#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int weight[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> weight[i];

    int capacity;
    cin >> capacity;

    int dp[n + 1][capacity + 1];
    dp[0][0] = 0;
    for (int i = 1; i <= capacity; i++)
    {
        dp[0][i] = INT_MAX - 1; // Infinity er sathe kichu jog korle gurbaje ashte pare tai infinity er theke kichu kom nilam
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            if (weight[i] <= j)
            {
                dp[i][j] = min(dp[i][j - weight[i]] + 1, dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // printing dp array
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    if (dp[n][capacity] != INT_MAX - 1)
        cout << dp[n][capacity] << endl;
    else
        cout << "IMPOSSIBLE" << endl;
    return 0;
}
/*
3
1 2 3
5
Output:2
*/