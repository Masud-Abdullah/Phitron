#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Find the divisor of n;
    long long n;cin>>n;
    vector<long long>divisor;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            divisor.push_back(i);
            if(n/i!=i)
            {
                divisor.push_back(n/i);    //sqrt Complexity
            }
        }
    }
    sort(divisor.begin(),divisor.end());
    for(int i=0;i<divisor.size();i++)cout<<divisor[i]<<" ";
    cout<<'\n';
    return 0;
}