#include <bits/stdc++.h>
int findSecondLargest(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end(), greater<int>());
    if (arr.size() == 1 || arr[0] == arr[arr.size() - 1])
    {
        return -1;
    }
    else
    {
        int val = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != val)
                return arr[i];
        }
    }
}