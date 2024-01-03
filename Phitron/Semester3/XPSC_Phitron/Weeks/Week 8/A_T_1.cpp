#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int tree[3 * N], a[N];
void build(int node, int l, int r)
{
    if (l == r)
    {
        tree[node] = a[l];
        return;
    }
    int leftNode = 2 * node;
    int rightNode = leftNode + 1;
    int mid = l + (r - l) / 2;

    build(leftNode, l, mid);
    build(rightNode, mid + 1, r);

    tree[node] = tree[leftNode] + tree[rightNode];
}
int query(int node, int l, int r, int x, int y)
{
    if (x <= l && y >= r)return tree[node];
    if (l > y || r < x)return 0;
    int leftNode = 2 * node;
    int rightNode = leftNode + 1;
    int mid = l + (r - l) / 2;
    return query(leftNode, l, mid, x, y) + query(rightNode, mid + 1, r, x, y);
}
void update1(int node, int l, int r, int indx)
{
    if (indx < l || indx > r)return;
    if (l == r && l == indx)
    {
        tree[node] = 0;
        return;
    }
    int leftNode = 2 * node;
    int rightNode = leftNode + 1;
    int mid = l + (r - l) / 2;

    update1(leftNode, l, mid, indx);
    update1(rightNode, mid + 1, r, indx);
    tree[node] = tree[leftNode] + tree[rightNode];
}
void update2(int node, int l, int r, int indx, int val)
{
    if (indx < l || indx > r)return;
    if (l == r && l == indx)
    {
        tree[node] += val;
        return;
    }
    int leftNode = 2 * node;
    int rightNode = leftNode + 1;
    int mid = l + (r - l) / 2;

    update2(leftNode, l, mid, indx, val);
    update2(rightNode, mid + 1, r, indx, val);
    tree[node] = tree[leftNode] + tree[rightNode];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":\n";
        int n, q;
        cin >> n >> q;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        build(1,0,n-1);
        while (q--)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                int y;
                cin >> y;
                cout << query(1, 0, n - 1, y, y) << '\n';
                update1(1, 0, n - 1, y);
            }
            else if (x == 2)
            {
                int y, z;
                cin >> y >> z;
                update2(1, 0, n - 1, y, z);
            }
            else if (x == 3)
            {
                int y, z;
                cin >> y >> z;
                cout << query(1, 0, n - 1, y, z) << '\n';
            }
        }
    }
    return 0;
}