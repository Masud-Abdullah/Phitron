#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;        cin>>a>>b;

    a=(double)a;
    b=(double)b;
 
    double pr = a/100.00;
    double rp=b/pr;
    cout<<100.00-rp<<'\n';
    return 0;
}