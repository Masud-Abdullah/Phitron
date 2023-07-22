#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);              // 10 30 40 50 60
        int cur_indx = v.size() - 1; // parent theke child index ber korar formula
        // cout << cur_indx << endl;
        int prnt_indx = (cur_indx - 1) / 2; // parent index ber korar formula
        // cout << prnt_indx << endl;

        while (cur_indx != 0)
        {
            if (v[cur_indx] < v[prnt_indx]) // child index er value boro holei swap hoy //
            {
                swap(v[cur_indx], v[prnt_indx]);
            }
            else
                break;
            cur_indx = prnt_indx;
            prnt_indx = (cur_indx - 1) / 2;
        }
    }

    for (int val : v)
    {
        cout << val << " "; // 60 50 30 10 40
    }
    cout << endl;

    return 0;
}
