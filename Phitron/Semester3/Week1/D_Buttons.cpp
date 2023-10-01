#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;        cin>>a>>b;
    if(a==b)cout<<a+b<<'\n';
    else if(a+1==b || a==b+1)cout<<a+b<<'\n';
    else if(a>b)cout<<a+(a-1)<<'\n';
    else cout<<b+(b-1)<<'\n';
    return 0;
}