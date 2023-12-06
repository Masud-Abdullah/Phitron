// // #include <bits/stdc++.h>
// // #define   nl         "\n"
// // #define   ll         long long int
// // #define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// // using namespace std;
// // ll px,py,ax,ay,bx,by;
// // double dst(ll a,ll b,ll c,ll d)
// // {
// //     return sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
// // }
// // bool inside(ll a,ll b,ll c,ll d,double r)
// // {
// //     double distance=dst(a,b,c,d);
// //     return (r-distance)>1e-8;
// // }
// // bool check(double mid)
// // {
// //     if(inside(ax,ay,0,0,mid) && inside(ax,ay,px,py,mid))return true;  //(0,0) and (px,py) duitai A lamp er moddhe
// //     else if(inside(bx,by,0,0,mid) && inside(bx,by,px,py,mid))return true;  //(0,0) and (px,py) duitai B lamp er moddhe
// //     else if(inside(ax,ay,0,0,mid) && inside(bx,by,px,py,mid) && ((2*mid)-dst(ax,ay,bx,by))>1e-8)return true; // (0,0)A lamp er moddhe ans (px,py)B lamp er moddhe
// //     else if(inside(ax,ay,px,py,mid) && inside(bx,by,0,0,mid) && ((2*mid)-dst(ax,ay,bx,by))>1e-8)return true;  // (px,py)A lamp er moddhe ans (0,0)B lamp er moddhe
// //     else return false; // possible na
// // }
// // int main()
// // {
// //     FIO;
// //     ll t;cin>>t;
// //     while(t--)
// //     {
// //         cin>>px>>py>>ax>>ay>>bx>>by;

// //         double lo=0.0,hi=LLONG_MAX*1.0,ans;
// //         while((hi-lo) > 1e-8)  //l<=r
// //         {
// //             double mid=lo+(hi-lo)/2;
// //             if(check(mid))
// //             {
// //                 hi=mid;
// //                 //ans=mid;
// //             }
// //             else lo=mid;
// //         }
// //         if(check(lo))cout<<fixed<<setprecision(10)<<lo<<nl;
// //         else cout<<fixed<<setprecision(10)<<hi<<nl;
// //         // cout<<fixed<<setprecision(10)<<ans<<nl;
// //         //cout<<lo<<" "<<hi<<nl;
// //         //cout<<dst(ax,ay,bx,by)<<nl;

// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// #define   nl         "\n"
// #define   NN         (cout << "NO\n")
// #define   YY         (cout << "YES\n")
// #define   nn         (cout << "No\n")
// #define   yy         (cout << "Yes\n")
// #define   ss         second
// #define   ff         first
// #define   all(v)     v.begin(),v.end()
// #define   ll         long long int
// #define   ull        unsigned long long
// #define   gcd(a, b)  __gcd(a, b)
// #define   lcm(a, b)  ((a/gcd(a,b)) * b)
// #define   pb         push_back
// #define   pii        pair<int,int>
// #define   pll        pair<long long,long long>
// #define   vii        vector< int >
// #define   vll        vector< ll >
// #define   vpi        vector< pii >
// #define   vpl        vector<pll>
// #define   sz(v)      v.size()
// #define   mm(a, x)   memset(a, x, sizeof(a))
// #define   pi         acos(-1.0)
// #define   jog(v)     accumulate(v.begin(), v.end(), 0)
// #define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
// #define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// ll px,py,ax,ay,bx,by;
// double dst(ll a,ll b,ll c,ll d)
// {
//     double ans=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
//     return ans;
// }
// bool inside(ll a,ll b,ll c,ll d,double r)
// {
//     double distance=dst(a,b,c,d);
//     return distance<=r;
// }
// bool check(double mid)
// {
//     if(inside(0,0,ax,ay,mid) && inside(px,py,ax,ay,mid))return true;
//     else if(inside(0,0,bx,by,mid) && inside(px,py,bx,by,mid))return true;
//     else if(inside(0,0,ax,ay,mid) && inside(px,py,bx,by,mid) && !(dst(ax,ay,bx,by)>2*mid))return true;
//     else if(inside(px,py,ax,ay,mid) && inside(0,0,bx,by,mid) && !(dst(ax,ay,bx,by)>2*mid))return true;
//     else return false;
// }
// int main()
// {
//     FIO;
//     ll t;cin>>t;
//     while(t--)
//     {
//         cin>>px>>py>>ax>>ay>>bx>>by;

//         double lo=0.0,hi=LLONG_MAX*1.0,ans=LLONG_MAX*1.0;
//         while(hi-lo > 1e-8)
//         {
//             double mid=lo+(hi-lo)/2;
//             if(check(mid))
//             {
//                 hi=mid;
//                 ans=min(ans,mid);
//             }
//             else lo=mid;
//         }
//         cout<<fixed<<setprecision(10)<<ans<<nl;
//         //cout<<lo<<" "<<hi<<nl;
//         //cout<<dst(ax,ay,bx,by)<<nl;

//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// #define   nl         "\n"
// #define   ll         long long int
// #define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// ll px,py,ax,ay,bx,by;
// double dst(ll a,ll b,ll c,ll d)
// {
//     return sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
// }
// bool inside(ll a,ll b,ll c,ll d,double r)
// {
//     double distance=dst(a,b,c,d);
//     return (r-distance)>1e-8;
// }
// bool check(double mid)
// {
//     if(inside(ax,ay,0,0,mid) && inside(ax,ay,px,py,mid))return true;  //(0,0) and (px,py) duitai A lamp er moddhe
//     else if(inside(bx,by,0,0,mid) && inside(bx,by,px,py,mid))return true;  //(0,0) and (px,py) duitai B lamp er moddhe
//     else if(inside(ax,ay,0,0,mid) && inside(bx,by,px,py,mid) && ((2*mid)-dst(ax,ay,bx,by))>1e-8)return true; // (0,0)A lamp er moddhe ans (px,py)B lamp er moddhe
//     else if(inside(ax,ay,px,py,mid) && inside(bx,by,0,0,mid) && ((2*mid)-dst(ax,ay,bx,by))>1e-8)return true;  // (px,py)A lamp er moddhe ans (0,0)B lamp er moddhe
//     else return false; // possible na
// }
// int main()
// {
//     FIO;
//     ll t;cin>>t;
//     while(t--)
//     {
//         cin>>px>>py>>ax>>ay>>bx>>by;

//         double lo=0.0,hi=LLONG_MAX*1.0,ans;
//         while((hi-lo) > 1e-8)  //l<=r
//         {
//             double mid=lo+(hi-lo)/2;
//             if(check(mid))
//             {
//                 hi=mid;
//                 //ans=mid;
//             }
//             else lo=mid;
//         }
//         if(check(lo))cout<<fixed<<setprecision(10)<<lo<<nl;
//         else cout<<fixed<<setprecision(10)<<hi<<nl;
//         // cout<<fixed<<setprecision(10)<<ans<<nl;
//         //cout<<lo<<" "<<hi<<nl;
//         //cout<<dst(ax,ay,bx,by)<<nl;

//     }
//     return 0;
// }
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
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   pi         acos(-1.0)
#define   jog(v)     accumulate(v.begin(), v.end(), 0)
#define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll px,py,ax,ay,bx,by;
double dst(ll a,ll b,ll c,ll d)
{
    double ans=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
    return ans;
}
bool inside(ll a,ll b,ll c,ll d,double r)
{
    double distance=dst(a,b,c,d);
    return distance<=r;
}
bool check(double mid)
{
    if(inside(0,0,ax,ay,mid) && inside(px,py,ax,ay,mid))return true;
    else if(inside(0,0,bx,by,mid) && inside(px,py,bx,by,mid))return true;
    else if(inside(0,0,ax,ay,mid) && inside(px,py,bx,by,mid) && !(dst(ax,ay,bx,by)>2*mid))return true;
    else if(inside(px,py,ax,ay,mid) && inside(0,0,bx,by,mid) && !(dst(ax,ay,bx,by)>2*mid))return true;
    else return false;
}
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        cin>>px>>py>>ax>>ay>>bx>>by;

        double lo=0.0,hi=LLONG_MAX*1.0,ans=LLONG_MAX*1.0;
        while(hi-lo > 1e-6)
        {
            double mid=lo+(hi-lo)/2;
            if(check(mid))
            {
                hi=mid;
                //ans=min(ans,mid);
            }
            else lo=mid+1e-6;
        }
        if(check(lo))cout<<fixed<<setprecision(10)<<lo<<nl;
        else cout<<fixed<<setprecision(10)<<hi<<nl;
        //cout<<lo<<" "<<hi<<nl;
        //cout<<dst(ax,ay,bx,by)<<nl;

    }
    return 0;
}
