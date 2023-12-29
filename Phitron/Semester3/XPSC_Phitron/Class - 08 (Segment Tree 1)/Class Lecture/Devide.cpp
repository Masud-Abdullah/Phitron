#include<bits/stdc++.h>
const int N = 1e5+7;
int a[N],tree[3*N];
void build(int node,int l,int r)
{
    if(l==r)
    {
        tree[node]=a[r];
        return;
    }
    int leftNode=2*node;
    int rightNode=leftNode+1;
    int mid=l+(r-l)/2;
    build(leftNode,l,mid);
    build(rightNode,mid+1,r);

    //value set
    tree[node]=tree[leftNode]+tree[rightNode]; //merge
}
int queury(int node,int l,int r,int x,int y)
{
    if(y<l || x>r)return 0; //puro bad
    else if(x<=l && y>=r)return tree[node];//purotuku nibo
    else
    {
        // majhamajhi obostha. children er upor depend kore
        int leftNode=node*2;
        int rightNode=leftNode+1;
        int mid=l+(r-l)/2;

        return queury(leftNode,l,mid,x,y)+queury(rightNode,mid+1,r,x,y);
        //merge
    }
}
void update(int node,int l,int r,int indx,int val)
{
    if(indx<l || indx>r)return;
    else if(l==r && r==indx)
    {
        tree[node]=val;
        return;
    }
    else
    {
        int leftNode=2*node;
        int rightNode=leftNode+1;
        int mid=l+(r-l)/2;
        update(leftNode,l,mid,indx,val);
        update(rightNode,mid+1,r,indx,val);
        tree[node]=tree[leftNode]+tree[rightNode]; //merge
    }
}
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    build(1,0,n-1); //NlogN
    int q;cin>>q;
    while(q--)  //qlogN
    {
        int t;cin>>t;
        if(t==0)
        {
            int indx,val;cin>>indx>>val;  //logN
            indx--;  //1 based index hole 
            update(1,0,n-1,indx,val);
        }
        else if(t==1)
        {
            int x,y;cin>>x>>y;
            x--,y--;  //1 based index hole 
            cout<<queury(1,0,n-1,x,y)<<'\n'; //logN
        }
    }

    //O(qlogN+NlogN)
    return 0;
}