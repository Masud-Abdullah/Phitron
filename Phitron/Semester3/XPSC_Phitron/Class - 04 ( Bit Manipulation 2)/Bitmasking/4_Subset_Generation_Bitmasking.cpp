#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<ll>> subsets;

    for (int i = 0; i < (1 << n); i++)
    {
        vector<ll> subset;
        for (int j = 0; j < n; j++)
        {
            int mask = 1 << j;
            int ans = (i & mask);
            if (ans == 0)
            {
                // nibo na
            }
            else
            {
                subset.emplace_back(a[j]);
            }
        }
        subsets.emplace_back(subset);
    }

    for (int i = 0; i < subsets.size(); i++)
    {
        for (int j = 0; j < subsets[i].size(); j++)
        {
            cout << subsets[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     vector<vector<int>> Subsets;
//     for (int i = 0; i < (1 << n); i++)
//     {
//         vector<int> Subset;
//         for (int j = 0; j < n; j++)
//         {
//             int mask = (1 << j); /// 6-> 110
//             int ans = (i & mask);
//             if (ans == 0)
//             {
//                 // nibo na
//             }
//             else
//             {
//                 Subset.emplace_back(a[j]);
//             }
//         }
//         Subsets.emplace_back(Subset);
//     }

//     for (int i = 0; i < Subsets.size(); i++)
//     {
//         for (int j = 0; j < Subsets[i].size(); j++)
//         {
//             cout << Subsets[i][j] << " ";
//         }
//         cout << '\n';
//     }
//     return 0;
// }

// /*
// Input:
// 3
// 1 2 5

// Output:
// 1
// 2
// 1 2
// 5
// 1 5
// 2 5
// 1 2 5
// */