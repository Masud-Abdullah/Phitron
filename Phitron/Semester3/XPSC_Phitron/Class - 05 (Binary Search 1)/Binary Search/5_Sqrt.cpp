#include<bits/stdc++.h>
using namespace std;
bool AreSame(double val,double n)
{
    return fabs(n-val)<=1e-15;
}
int main()
{
    double n;cin>>n;
    double lo=0.0,hi=n,mid;
    while((hi-lo)>1e-15)
    {
        mid=lo+(hi-lo)/2;
        double val=mid*mid;
        if(AreSame(n,val))
        {
            cout<<mid<<'\n';
            break;
        }

        if(val>n)hi=mid;
        else lo=mid;
    }
    return 0;
}