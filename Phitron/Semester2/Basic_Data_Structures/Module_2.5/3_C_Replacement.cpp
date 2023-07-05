#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;  cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int tm;  cin>>tm;
        if(tm>0)a.push_back(1);
        else if(tm<0)a.push_back(2);
        else a.push_back(tm);
    }

    for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}