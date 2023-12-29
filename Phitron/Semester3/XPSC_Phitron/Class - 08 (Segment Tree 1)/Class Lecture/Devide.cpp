#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int a[N];
int tree[N*3];
void build(int node,int l,int r)
{
    //cout<<node<<" "<<l<<" "<<r<<'\n';
    if(l==r)
    {
        tree[node]=a[r];  //single segment; ekhane l o deya jaito
        return;
    }
    int leftNode = 2*node;
    int rightNode = leftNode+1;
    int mid=l+(r-l)/2;
    build(leftNode,l,mid);
    build(rightNode,mid+1,r);

    //value set
    tree[node]=tree[leftNode]+tree[rightNode];
}
int query(int node,int l,int r,int x,int y)
{
    //case:01 (totally baire)
    if(r<x || l>y)return 0;
    else if(l>=x && r<=y)return tree[node];  // case:02  (totally vitore)
    else //case:03 partially vitore; tai etake abar devide korbo
    {
        int leftNode=node*2;
        int rightNode=leftNode+1;
        int mid=l-(r-l)/2;
        int left = query(leftNode,l,mid,x,y);
        int right = query(rightNode,mid+1,r,x,y);
        return left+right;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    build(1,0,n-1);
    for(int i=1;i<=13;i++)
    {
        cout<<tree[i]<<" ";
    }
    cout<<'\n';
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int t;
    //     cin >> t;
    //     if (t == 0)
    //     {
    //         int indx, val;
    //         cin >> indx >> val;
    //         indx--;
    //     }
    //     else if (t == 1)
    //     {
    //         int x, y;
    //         cin >> x >> y;
    //         x--;
    //         y--;
    //     }
    //}
    return 0;
}