#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tm;
        cin >> tm;
        a.push_back(tm);
    }

    int cnt=0;

    for(int i=0;i<n;i++)
    {
        //vector<int>::iterator it;
        auto it=find(a.begin(),a.end(),a[i]+1);

        if(it!=a.end())cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}