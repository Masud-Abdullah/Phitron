#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    bool f=false;

    for(int i=0 ; i < (1<<n) ; i++)
    {
        long long int sm=0;
        for(int j=0;j<n;j++)
        {
            int mask = 1<<j;
            int ans = (mask&i);
            if(ans == 0)sm-=a[j];
            else sm+=a[j];
        }
        if(sm%360==0)
        {
            f=true;
            break;
        }
    }

    if(f)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}


/*
#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   nn         (cout << "No\n")
#define   yy         (cout << "Yes\n")
#define   ss         second
#define   ff         first
#define   all(v)     v.begin(),v.end()
#define   ll         long long int
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pb         push_back
#define   mp         make_pair
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   pi         acos(-1.0)
#define   ceil(a,b)  (a+b-1)/b
#define   jog(v)     accumulate(v.begin(), v.end(), 0)
#define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N = 16;
int n;
int a[N];
bool solve(int i,int j)
{
    if(i==n-1)
    {
        if((j+a[i])%360==0)return true;
        else if((j-a[i])%360==0)return true;
        else return false;
    }

    bool x=solve(i+1,j+a[i]);
    bool y=solve(i+1,j-a[i]);
    if(x || y)return true;
    else return false;
}
int main()
{
    FIO;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    bool ok = solve(0,0);
    if(ok)YY;
    else NN;
    return 0;
}
*/