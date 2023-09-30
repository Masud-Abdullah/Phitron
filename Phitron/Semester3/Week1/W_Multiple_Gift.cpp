#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;        cin>>x>>y;
    int cnt=1,tp=x;
    while(1)
    {
        tp*=x;
        cnt++;
        if(tp*x>y)break;
    }
    cout<<cnt<<'\n';
    return 0;
}