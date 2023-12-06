#include <bits/stdc++.h>
using namespace std;
int knapsack(int n, int capacity, int v[], int w[])
{
    // Base Case
    if (n == 0 || capacity == 0)
        return 0;

    if (w[n] <= capacity)
    {
        int op1 = knapsack(n - 1, capacity - w[n], v, w) + v[n]; // jeta nicchi oitar value ta plus kortesi.
        int op2 = knapsack(n - 1, capacity, v, w);               // jehetu nichi na tai ar kichu plus kora lagbe na.
        return max(op1, op2);
    }
    else
    {
        return knapsack(n - 1, capacity, v, w);
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

    cout << knapsack(n, capacity, v, w) << endl;

    return 0;
}