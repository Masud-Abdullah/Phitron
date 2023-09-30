#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n-1],sm=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sm+=a[i];
    }
    long long int tsm=(n*(n+1))/2;

    cout<<tsm-sm<<endl;

    return 0;
}
