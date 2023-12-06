#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n==3)
        {
            cout<<-1<<'\n';
            continue;
        }
        cout<<n<<" "<<n-1<<" ";
        for(int i=1;i<=n-2;i++)cout<<i<<" ";
        cout<<'\n';
        // vector<int>v;
        // for(int i=n;i>=1;i--)v.push_back(i);
        // for(int i=0;i<v.size()-1;i++)
        // {
        //     if(v[i] == i+1)swap(v[i],v[i+1]);
        // }
        // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        // cout<<'\n';
    }
    return 0;
}