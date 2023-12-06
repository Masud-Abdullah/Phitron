// Using Top Down DP

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7;
// int dp[N];
// int solve(int array[], int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     if (dp[n] != -1)
//         return dp[n];
//     else if (n == 2)
//     {
//         dp[n] = abs(array[2] - array[1]);
//         return dp[n];
//         // return dp[n] = abs(array[2] - array[1]);  //short cut
//     }
//     else
//     {
//         int choice1 = solve(array, n - 1) + abs(array[n] - array[n - 1]);
//         int choice2 = solve(array, n - 2) + abs(array[n] - array[n - 2]);
//         dp[n] = min(choice1, choice2);
//         return dp[n];
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int array[n + 1];
//     for (int i = 1; i <= n; i++)
//     {
//         dp[i] = -1;
//         cin >> array[i];
//     }
//     cout << solve(array, n) << endl;

//     return 0;
// }
// Using Bottom Up DP
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cost[n + 1], dp[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }

    dp[1] = 0;
    dp[2] = abs(cost[1] - cost[2]);
    for (int i = 3; i <= n; i++)
    {
        int choice1 = dp[i - 1] + abs(cost[i] - cost[i - 1]);
        int choice2 = dp[i - 2] + abs(cost[i] - cost[i - 2]);
        dp[i] = min(choice1, choice2);
    }
    cout << dp[n] << endl;
    return 0;
}