#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[n + 1], w[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        cin >> w[i];

    int capacity;
    cin >> capacity;

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
            if (w[i] <= j)
            {
                //dp state
                int op1 = dp[i - 1][j - w[i]] + v[i];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for (int i = 0; i <=n; i++)    // Printing dp array //
    {
        for (int j = 0; j<=capacity; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
        
    }

    cout << dp[n][capacity] << endl;
    return 0;
}
/*
4
1 5 3 2
5 2 4 3
7
*/