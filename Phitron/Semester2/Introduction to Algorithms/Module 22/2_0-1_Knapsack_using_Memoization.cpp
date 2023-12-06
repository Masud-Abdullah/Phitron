#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapsack(int n, int capacity, int v[], int w[])
{
    // Base Case
    if (n == 0 || capacity == 0)
        return 0;

    if (dp[n][capacity] != -1)
        return dp[n][capacity];

    if (w[n] <= capacity)
    {
        int op1 = knapsack(n - 1, capacity - w[n], v, w) + v[n]; // jeta nicchi oitar value ta plus kortesi.
        int op2 = knapsack(n - 1, capacity, v, w);               // jehetu nichi na tai ar kichu plus kora lagbe na.
        return dp[n][capacity] = max(op1, op2);
    }
    else
    {
        return dp[n][capacity] = knapsack(n - 1, capacity, v, w);
    }
}
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

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n, capacity, v, w) << endl;

    return 0;
}
/*
4
1 5 3 2
5 2 4 3
7
*/