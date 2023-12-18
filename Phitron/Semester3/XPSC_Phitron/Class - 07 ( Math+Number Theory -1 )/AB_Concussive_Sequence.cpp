#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   nn         (cout << "No\n")
#define   yy         (cout << "Yes\n")
#define   ss         second
#define   ff         first
#define   all(v)     v.begin(),v.end()
#define issort(a) is_sorted(a.begin(),a.end())
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
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        vll x,y;
        for(ll i=1;i<=n;i++)
        {
            if(i<=(n+1)/2)x.pb(a[i]);
            else y.pb(a[i]);
        }

        vll sb,bs;
        ll fr=0,bc=0;
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sb.pb(x[fr]);
                fr++;
            }
            else
            {
                sb.pb(y[bc]);
                bc++;
            }
        }

        fr=0,bc=0;
        for(ll i=0;i<n;i++)
        {
            if(i%2)
            {
                bs.pb(x[fr]);
                fr++;
            }
            else
            {
                if(n%2 && i==n-1)
                {
                    bs.pb(x.back());
                }
                else
                {
                    bs.pb(y[bc]);
                    bc++;
                }
            }
        }

        // for(ll i=0;i<sz(x);i++)cout<<x[i]<<" ";cout<<nl;
        // for(ll i=0;i<sz(y);i++)cout<<y[i]<<" ";cout<<nl;
        //for(ll i=1;i<=n;i++)cout<<a[i]<<" ";cout<<nl;
        // for(ll i=0;i<sz(sb);i++)cout<<sb[i]<<" ";cout<<nl;
        // for(ll i=0;i<sz(bs);i++)cout<<bs[i]<<" ";cout<<nl;

        bool f=true,g=true;
        for(ll i=1;i<sz(sb)-1;i++)
        {
            if(!(sb[i-1]>sb[i] && sb[i]<sb[i+1]) && !(sb[i-1]<sb[i] &&  sb[i]>sb[i+1]))f=false;
            if(!(bs[i-1]>bs[i] && bs[i]<bs[i+1]) && !(bs[i-1]<bs[i] &&  bs[i]>bs[i+1]))g=false;
        }

        if(f)
        {
            for(ll i=0;i<sz(sb);i++)cout<<sb[i]<<" ";cout<<nl;
        }
        else if(g)
        {
            for(ll i=0;i<sz(bs);i++)cout<<bs[i]<<" ";cout<<nl;
        }
        else cout<<-1<<nl;
    }
    return 0;
}














// #include <bits/stdc++.h>
// #define   nl         "\n"
// #define   NN         (cout << "NO\n")
// #define   YY         (cout << "YES\n")
// #define   ll         long long int
// #define   pb         push_back
// #define   pii        pair<int,int>
// #define   pll        pair<long long,long long>
// #define   vii        vector< int >
// #define   vll        vector< ll >
// #define   vpi        vector< pii >
// #define   vpl        vector<pll>
// #define   sz(v)      v.size()
// #define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     ll t;cin>>t;
//     while(t--)
//     {
//         ll n;cin>>n;
//         ll a[n+1];
//         for(ll i=1;i<=n;i++)cin>>a[i];
//         sort(a+1,a+n+1);
//         ll fr=1,bc=n;
//         vll ans;
//         bool f=false,g=true;;
//         for(ll i=1;i<=n;i++)
//         {
//             if(!f)
//             {
//                 ans.pb(a[fr]);
//                 fr++;
//                 f=true;
//             }
//             else 
//             {
//                 ans.pb(a[bc]);
//                 bc--;
//                 f=false;
//             }
//         }

//         ll Sfr=1,Sbc=n;
//         vll Sans;
//         bool Sf=true,Sg=true;;
//         for(ll i=1;i<=n;i++)
//         {
//             if(!Sf)
//             {
//                 Sans.pb(a[Sfr]);
//                 Sfr++;
//                 Sf=true;
//             }
//             else 
//             {
//                 Sans.pb(a[Sbc]);
//                 Sbc--;
//                 Sf=false;
//             }
//         }

//         f=true,g=true;
//         for(ll i=1;i<sz(ans)-1;i++)
//         {
//             if(!(ans[i-1]>ans[i] && ans[i]<ans[i+1]) && !(ans[i-1]<ans[i] &&  ans[i]>ans[i+1]))f=false;
//             if(!(Sans[i-1]>Sans[i] && Sans[i]<Sans[i+1]) && !(Sans[i-1]<Sans[i] &&  Sans[i]>Sans[i+1]))g=false;
//         }

//         if(f)
//         {
//             for(ll i=0;i<sz(ans);i++)cout<<ans[i]<<" ";cout<<nl;
//         }
//         else if(g)
//         {
//             for(ll i=0;i<sz(ans);i++)cout<<Sans[i]<<" ";cout<<nl;
//         }
//         else cout<<-1<<nl;
//         // for(ll i=0;i<n;i++)cout<<ans[i]<<" ";
//         // cout<<nl;
        
//     }
//     return 0;
// }

// /*
// // for(ll i=1;i<n-1;i++)
//         // {
//         //     if((ans[i-1]<ans[i] &&  ans[i]>ans[i+1])||(ans[i-1]>ans[i] && ans[i]<ans[i+1]))continue;
//         //     else
//         //     {
//         //         g=false;
//         //         break;
//         //     }
//         // }
// */

// /*
// f=true;
//         if(ans[n-1]==ans[n-2] && ans[n-2]==ans[n-3])g=false;
//         if(ans[n-1]==ans[n-2] && ans[n-2]!=ans[n-3] && ans[n-1]==ans[0])g=false;
//         if(ans[n-1]==ans[n-2] && ans[n-2]!=ans[n-3])f=false;

//         Sf=true;
//         if(Sans[n-1]==Sans[n-2] && Sans[n-2]==Sans[n-3])Sg=false;
//         if(Sans[n-1]==Sans[n-2] && Sans[n-2]!=Sans[n-3] && Sans[n-1]==Sans[0])Sg=false;
//         if(Sans[n-1]==Sans[n-2] && Sans[n-2]!=Sans[n-3])Sf=false;
        
//         if(!g && !Sg)cout<<-1<<nl;
//         else 
//         {
//             if(g)
//             {
//                 if(!f)cout<<ans[n-1]<<" ";
//                 for(ll i=0;i<n-1;i++)cout<<ans[i]<<" ";
//                 if(f)cout<<ans[n-1]<<" ";
//                 cout<<nl;
//             }
//             else
//             {
//                 if(!Sf)cout<<Sans[n-1]<<" ";
//                 for(ll i=0;i<n-1;i++)cout<<Sans[i]<<" ";
//                 if(Sf)cout<<Sans[n-1]<<" ";
//                 cout<<nl;
//             }
//         }
// */