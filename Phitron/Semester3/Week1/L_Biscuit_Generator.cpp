#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(c<a || c<b)cout<<0<<'\n';
    else cout<<(c/a)*b<<'\n';
    return 0;
}