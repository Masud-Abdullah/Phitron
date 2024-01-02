#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;  // if time is 1 second
vector<int>D[N+1];
void Divisor()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
        {
            D[j].emplace_back(i);
        }
    }
}
int main()
{
    Divisor();
    for(int i=1;i<N;i++)
    {
        cout<<i<<"-> ";
        for(auto val : D[i])cout<<val<<" ";
        cout<<'\n';
    }
    return 0;
}

/*
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
*/