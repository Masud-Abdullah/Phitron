#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v[3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                v[i].push_back(s);
            }
        }

        // for(int i=0;i<3;i++)
        // {
        //     for(auto it:v[i])
        //     {
        //         cout<<it<<" ";
        //     }
        //     cout<<'\n';
        // }
        // cout<<'\n';

        for (int i = 0; i < 3; i++)
        {
            for (auto it : v[i])
            {
                mp[it]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int sm = 0;
            for (auto it : v[i])
            {
                if (mp[it] == 1)
                    sm += 3;
                else if (mp[it] == 2)
                    sm++;
            }
            cout << sm << " ";
        }
        cout << '\n';
    }
    

    return 0;
}