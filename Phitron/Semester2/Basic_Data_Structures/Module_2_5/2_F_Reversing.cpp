#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;  cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int tm;
        cin>>tm;
        a.push_back(tm);
    }

    reverse(a.begin(),a.end());
    for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}