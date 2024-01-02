#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+5;
bool A[N];
void sieve()
{
    for(int i=2;i*i<N;i++)
    {
        for(int j=i*i;j<N;j+=i)  // N log(N); originally Nlog(log(N)) er thekeo ektu kom;
        {
            if(!A[i])
            {
                A[j]=true;
            }
        }
    }
}
int main()
{
    sieve();
    int test;cin >>test;
    while(test--)
    {
        int n;cin>>n;
        if(!A[n])cout<<"Prime\n";
        else cout<<"Not Prime\n";
    }
    return 0;
}