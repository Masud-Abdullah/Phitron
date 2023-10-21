#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pll pair<long long int,long long int>
bool cmp(pll x,pll y)
{
    return x.first>y.first;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll sm = 0;
        vector<pair<ll, ll>> ans;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sm += i;
                if ((n - i - 1) > i)
                    ans.push_back({(n - i - 1), i});
                //else ans.push_back({0,i});
            }
            else
            {
                sm += (n - i - 1);
                if ((n - i - 1) < i)
                    ans.push_back({i, (n - i - 1)});
                //else ans.push_back({0,});
            }
        }
        while (ans.size() < n)
        {
            ans.push_back({0, 0});
        }

        sort(ans.begin(), ans.end(), cmp);
        // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        // cout<<'\n';
        for (int i = 1; i < ans.size(); i++)
        {
            ans[i].first += ans[i - 1].first;
            ans[i].second += ans[i - 1].second;
        }
        // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        // cout<<'\n';
        // cout<<sm<<'\n';
        for (int i = 0; i < n; i++)
        {
            cout << sm + ans[i].first - ans[i].second << " ";
        }
        cout << '\n';
    }
    return 0;
}
/*
            if(s[i]=='L' && i<(n-i-1))
            {
                sm+=((n-i-1)-i);
            }
            else if(i>(n-i-1))sm+=(i-(n-i-1));
            cout<<sm<<" ";
*/