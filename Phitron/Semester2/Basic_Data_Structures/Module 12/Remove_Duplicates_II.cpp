#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>LST;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        LST.push_back(val);
    }
    LST.sort();
    LST.unique();
    for(int val:LST)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}