#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    if(n==2)return true;
    else if(n==1 || n%2==0)return false;
    for(long long i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    long long n;cin>>n;
    if(isPrime(n))cout<<1<<'\n';
    else if(n%2==0)cout<<2<<'\n';  // protita non prime but even number ke duita prime er sum akare prokash kora jay.  
    else if(isPrime(n-2))cout<<2<<'\n';  // protita od number ekta odd+ekta even mile gothito hoy. ekhon ekta odd ke duita prime er sum akare prokash korte chaile even hishebe 2 ei nite hobe and n-2 jeta thakbe oita prime hote hobe. tailei possible 
    else cout<<3<<'\n'; // 95-> 89+3+3(all are prime), 27-> 23+2+2(all are prime)
    return 0;
}