#include<stdio.h>
long long fact(int n)
{
    if(n==0)return 1;
    long long ans=fact(n-1);
    return ans*n;
}
int main()
{
     int n;
     scanf("%d",&n);
     long long ans=fact(n);
     printf("%lld\n",ans);
    return 0;
}