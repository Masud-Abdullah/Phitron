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
    dp[0][0] = 1;
    for (int i = 1; i <= capacity; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            if (weight[i] <= j)
            {
                dp[i][j] = dp[i][j - weight[i]] + dp[i - 1][j];
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

/*
3
1 2 3
5
Output:5
*/