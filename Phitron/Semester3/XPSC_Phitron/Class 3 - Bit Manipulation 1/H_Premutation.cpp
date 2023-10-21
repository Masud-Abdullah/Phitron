#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
            }
        }

        vector<int> v;
        for (int i = 0; i < n; i++)
            v.push_back(a[i][0]);
        sort(v.begin(), v.end());

        pair<int, int> x[2];
        x[0].first = v[0];
        x[1].first = v[v.size() - 1];
        x[0].second = 0;
        x[1].second = 0;

        int p, q;
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] == x[0].first)
            {
                x[0].second++;
                p = i;
            }
            else
            {
                x[1].second++;
                q = i;
            }
        }

        if (x[0].second < x[1].second)
        {
            cout << x[1].first << " ";
            for (int i = 0; i < n - 1; i++)
                cout << a[p][i] << " ";
            cout << '\n';
        }
        else
        {
            cout << x[0].first << " ";
            for (int i = 0; i < n - 1; i++)
                cout << a[q][i] << " ";
            cout << '\n';
        }

        // for(int i=0;i<2;i++)cout<<x[i].first<<" "<<x[i].second<<'\n';
    }
    return 0;
}