#include <bits/stdc++.h>
#define   nl         "\n"
#define   all(v)     v.begin(),v.end()
#define   ll         long long int
#define   pb         push_back
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
#define   sz(v)      v.size()
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const ll N = 2e5+7;
ll a[N],h[N],pre[N],tmp[N],n,k;
bool vis[N];
bool check(ll mid)
{
    bool f=false;
    for(ll i=mid;i<=n;i++)
    {
        if((tmp[i]==-1 && pre[i]-pre[i-mid]<=k)|| (vis[i] && ((i==n && mid==1 && vis[i]) || vis[i-mid+2]) && (i-tmp[i]>=mid-1) && (pre[i]-pre[i-mid]<=k)))
        {
            f=true;
            break;
        }
        if(mid==1 && a[i]<=k)
        {
            f=true;
            break;
        }
    }
    return f;
}
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(ll i=1;i<=n;i++)cin>>a[i];
        for(ll i=1;i<=n;i++)cin>>h[i];
        for(int i=1;i<=n;i++)
        {
            vis[i]=true;
            pre[i]=0;
        }
        for(ll i=2;i<=n;i++)
        {
            if(h[i-1]%h[i]!=0)vis[i]=false;
        }
        pre[1]=a[1];
        for(ll i=2;i<=n;i++)pre[i]=pre[i-1]+a[i];

        ll fl=-1;
        for(ll i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                fl=i;
            }
            tmp[i]=fl;
        }
        // for(ll i=1;i<=n;i++)
        // {
        //     if(vis[i])cout<<1<<" ";
        //     else cout<<0<<" ";
        // }
        // cout<<nl;
        // for(ll i=1;i<=n;i++)cout<<tmp[i]<<" ";
        // cout<<nl;
        //continue; 
        // for(ll i=1;i<=n;i++)
        // {
        //     if(vis[i])cout<<1<<" ";
        //     else cout<<0<<" ";
        // }
        // cout<<nl;
        // for(ll i=1;i<=n;i++)cout<<tmp[i]<<" ";
        // cout<<nl;
        // continue;
        ll lo=0,hi=n,mid,ans=0;
        while(lo<=hi)
        {
            //cout<<"T"<<nl;
            mid=(hi+lo)/2;
            if(check(mid))
            {
                lo=mid+1;
                ans=mid;
            }
            else hi=mid-1;
        }
        cout<<ans<<nl;
    }
    return 0;
}

/*
// ll x=0;
    // vll sg;
    // for(ll i=1;i<=n-1;i++)
    // {
    //     if(!div[i])
    //     {
    //         x=0;
    //         continue;
    //     }
    //     x++;
    //     if(x==mid)
    //     {
    //         sg.pb(i);
    //         x=0;
    //     }
    // }
    // bool f=false;
    // for(ll i=0;i<sz(sg);i++)
    // {
    //     if(pre[sg[i]]-pre[sg[i]-mid]<k)
    //     {
    //         f=true;
    //         break;
    //     }
    // }
*/