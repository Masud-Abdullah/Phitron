#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    map<int,int>cnt;
    vector<int>primeFactor;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cnt[i]++;
            primeFactor.push_back(i);
            n/=i;
        }
    }
    if(n>1)
    {
        cnt[n]++;
        primeFactor.push_back(n);
    }

    for(auto it : cnt)
    {
        cout<<it.first<<" "<<it.second<<'\n';
    }
    for(int i=0;i<primeFactor.size();i++)
    {
        cout<<primeFactor[i] << " ";
    }
    cout<<'\n';
    return 0;
}