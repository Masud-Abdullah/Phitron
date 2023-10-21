#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]

/// Substring_Check:
/// str1(main string)
/// str2(substring)
/// if((str1.find(str2) != string :: npos))yy;
/// else nn;

/// int a[n];
/// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pii> a(n);
        vector<pii> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i].first;
            b[i].second = i;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[a[i].second] = b[i].first;
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << nl;
    }
    return 0;
}

// int main()
// {
//     FIO;
//     int t;
//     cin>>t;
//     while(t--)
//     {
//        int n,k,f1,f2;
//        cin>>n>>k;
//        int a[n],x[n],c[n];
//        for(int i=0;i<n;i++)
//        {
//         cin>>a[i];
//         x[i]=a[i];
//        }

//        int b[n],y[n];
//        for(int i=0;i<n;i++)
//        {
//         cin>>b[i];
//         y[i]=b[i];
//        }

//        sort(x,x+n);
//        sort(y,y+n);

//        for(int i=0;i<n;i++)
//        {
//         f2=0;
//         for(int j=0;j<n;j++)
//         {
//             if(a[i]==x[j] && a[j]!=763218 && f2!=1)
//             {
//                 c[i]=y[j];
//                 x[j]=763218;
//                 f2=1;
//                 break;
//             }
//         }
//        }

//        for(int i=0;i<n;i++)
//        {
//         cout<<c[i]<<" ";
//        }
//        cout<<nl;
//     }

//     return 0;
// }