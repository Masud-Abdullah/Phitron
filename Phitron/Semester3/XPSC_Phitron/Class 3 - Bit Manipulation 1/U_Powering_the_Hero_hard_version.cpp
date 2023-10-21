#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        priority_queue<int>pq;
        long long int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                if(pq.empty())continue;
                cnt+=pq.top();
                pq.pop();
            }
            else pq.push(a[i]);
        }
        cout<<cnt<<'\n';
    }
    return 0;
}