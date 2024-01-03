#include <bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pll        pair<long long,long long>
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const ll MX = 1e6+7;
ll n;
string s;
pair<pll,ll>tree[3*MX];
void build(ll Node,ll l,ll r)
{
    if(l==r)
    {
        if(s[l]=='(')tree[Node].first.first++;
        if(s[l]==')')tree[Node].first.second++;
        return ;
    }
    ll leftNode=2*Node;
    ll rightNode=leftNode+1;
    ll mid=(l+r)/2;
    build(leftNode,l,mid);
    build(rightNode,mid+1,r);

    ll ans=min(tree[leftNode].first.first,tree[rightNode].first.second);
    tree[Node].second+=ans+tree[leftNode].second+tree[rightNode].second;
    tree[Node].first.first+=(tree[leftNode].first.first-ans)+tree[rightNode].first.first;
    tree[Node].first.second+=tree[leftNode].first.second+(tree[rightNode].first.second-ans);
}
pair<pll,ll> query(ll Node,ll l,ll r,ll x,ll y)
{
    if(x>r || y<l)return {{0,0},0};
    if(x<=l && r<=y)return tree[Node];
    ll leftNode=2*Node;
    ll rightNode=leftNode+1;
    ll mid=l+(r-l)/2;
    pair<pll,ll>left = query(leftNode,l,mid,x,y);
    pair<pll,ll>right = query(rightNode,mid+1,r,x,y);
    pair<pll,ll>ans;
    ans.second = left.second+right.second+min(left.first.first,right.first.second);
    ans.first.first = (left.first.first-min(left.first.first,right.first.second)) + right.first.first;
    ans.first.second = left.first.second+(right.first.second-min(left.first.first,right.first.second));
    return ans;
}
int main()
{
    FIO;
    cin>>s;
    n=s.size();
    build(1,0,n-1);
    ll m;cin>>m;
    while(m--)
    {
        ll x,y;cin>>x>>y;
        x--;
        y--;
        
        cout<<2*(query(1,0,n-1,x,y)).second<<nl;
    }
    return 0;
}
