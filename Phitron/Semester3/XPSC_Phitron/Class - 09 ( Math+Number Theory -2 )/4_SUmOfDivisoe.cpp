#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;  // if time is 1 second
int D[N+1];
void Divisor()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
        {
            D[j]+=i;
        }
    }
}
int main()
{
    Divisor();
    int test;cin>>test;
    while(test--)
    {
        int n;cin>>n;
        cout<<D[n]<<'\n';
    }
    return 0;
}
