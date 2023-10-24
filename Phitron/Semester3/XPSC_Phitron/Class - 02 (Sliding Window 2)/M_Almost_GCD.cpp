#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], cnt = 0,ans=INT_MIN,val;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 2; i <= 1000; i++)
    {
        cnt=0;
        for (int j = 0; j < n; j++)
        {
            if(a[j]%i==0)cnt++;
        }
        if(cnt>=ans)
        {
            ans=cnt;
            val=i;
        }
    }
    cout<<val<<'\n';
    return 0;
}