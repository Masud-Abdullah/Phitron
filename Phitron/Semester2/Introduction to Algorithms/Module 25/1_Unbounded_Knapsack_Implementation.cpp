// Top Down Approach

#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbounded_knapsack(int n, int capacity, int val[], int weight[])
{
    if (n == 0 || capacity == 0)
        return 0;
    if (dp[n][capacity] != -1)
        return dp[n][capacity];
    if (weight[n] <= capacity)
    {
        int op1 = val[n] + unbounded_knapsack(n, capacity - weight[n], val, weight);
        int op2 = unbounded_knapsack(n - 1, capacity, val, weight);
        return dp[n][capacity] = max(op1, op2);
    }
    else
    {
        return dp[n][capacity] = unbounded_knapsack(n - 1, capacity, val, weight);
    }
}
int main()
{
    int n, capacity;
    cin >> n >> capacity;
    int val[n + 1], weight[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> val[i];

    for (int i = 1; i <= n; i++)
        cin >> weight[i];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << unbounded_knapsack(n, capacity, val, weight) << endl;
    return 0;
}

/*
Input:
4 6
5 3 2 4
4 1 3 2
Output: 18
*/