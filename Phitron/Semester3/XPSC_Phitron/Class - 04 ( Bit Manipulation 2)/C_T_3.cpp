/*
    Approach: 
    
    m(last value) holo Fedor er. Oi last value er sathe array er prottek ta value
    XOR kore je value pawa jabe shetar set bit joto hobe (set bit joto hobe oto gula bit mile nai)
    sheta jodi (<=k) hoy tahole ans++ hobe nahole na 
    
    (Niche builtin function chara manually code ache)
*/
 



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;cin>>n>>m>>k;
    int a[m+1];
    for(int i=0;i<m+1;i++)cin>>a[i];

    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(__builtin_popcount(a[i]^a[m])<=k)ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
/*
#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
 
int countSetBit(int n)
{
    int cnt=0;
    while(n)
    {
        cnt += (n&1);
        n>>=1;
    }
    return cnt;
}
 
int main()
{
    FIO;
    int n,m,k; cin >> n >> m >>k;
 
    int a[m+1];
    for (int i = 0; i < m+1; i++)
    {
        cin >> a[i];
    }
 
    int me = a[m];
    int ans =0;
 
    for (int i = 0; i < m; i++)
    {
        if(countSetBit(a[i]^me)<=k) ans++; //different value xor krle 1 hoy r same same value xor krle zero hoy, different gula just 1 hoye thkbe tai result a then sekhan theke 1(set bit) cnt krtesi
    }
 
    cout << ans << endl;
    
    
     
    return 0;
}
*/