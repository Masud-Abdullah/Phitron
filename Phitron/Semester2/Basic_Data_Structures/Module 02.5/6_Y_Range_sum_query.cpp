#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    vector<long long int>a(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }

    while(q--)
    {
        long long int l,r;
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<endl;
    }
    //6 4 2 7 2 7
    //a[3]-a[L-1];

    return 0;
}