#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
    int mx = INT_MIN, ans;
    for (int i = 0; i < arr.size(); i++)
    {
        mx = max(mx, arr[i]);
    }
    int cnt[mx + 1] = {0};
    for (int i = 0; i < arr.size(); i++)
    {
        cnt[arr[i]]++;
    }

    for (int i = 1; i <= mx; i++)
    {
        if (cnt[i] > 1)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
