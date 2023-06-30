#include<stdio.h>
 long long summation(long long a[],int n,int i)
{
    if(i==n)return 0;
    long long ans=summation(a,n,i+1);
    ans+=a[i];   //Asif Abdullah's Code
    return ans;
}
int main()
{
     int n;
     scanf("%d",&n);
     long long a[n];
     for(int i=0;i<n;i++)
     {
        scanf("%lld",&a[i]);
     }
     long long ans=summation(a,n,0);
     printf("%lld\n",ans);

    return 0;
}