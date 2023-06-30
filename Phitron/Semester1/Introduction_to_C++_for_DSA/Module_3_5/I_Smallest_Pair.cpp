#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, mn = INT_MAX;
        cin >> n;
        long long a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                mn = min(mn, (a[i] + a[j] + j - i));
            }
        }

        cout << mn << endl;
    }

    return 0;
}

// Previous code
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int test;
//      cin >> test;

//     while(test--){

//         long long n, i, j, minn = 10e18;
//         cin >> n;
//         int a[n+1];

//         for(i=1; i<=n; i++){
//             cin >> a[i];
//         }

//         for(i=1; i<n; i++){
//             for(j=i+1; j<=n; j++){
//                 long long sum = 0;
//                 sum = a[i] + a[j] + j - i;
//                 if(sum < minn) minn = sum;
//             }
//         }
//         cout << minn << endl;
//     }

//     return 0;
// }