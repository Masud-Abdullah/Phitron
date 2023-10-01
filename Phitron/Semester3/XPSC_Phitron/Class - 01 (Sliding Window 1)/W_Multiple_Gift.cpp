#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;        cin>>x>>y;
    long long int cnt=1,tp=x;
    while(1)
    {
        tp*=2;
        if(tp>y)break;
        cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}