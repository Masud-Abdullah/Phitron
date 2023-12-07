#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a[n+5];
        for(int i=1;i<=n;i++)
        {
            int m;
            cin>>m;
            for(int j=1;j<=m;j++)
            {
                int x;
                cin>>x;
                a[i].push_back(x);
            }
            sort(a[i].begin(),a[i].end());
        }
 
        long long sum = 0;
        int mn = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            sum += (a[i])[1];
            mn = min(mn, (a[i])[1]);
        }
        sum -= mn;
        int men = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            men = min(men, (a[i])[0]);
        }
 
        cout<<sum+men<<'\n';
 
    }
    return 0;
}