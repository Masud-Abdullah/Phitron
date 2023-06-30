#include<stdio.h>
int main()
{
     long long n,k,a;
     scanf("%lld%lld%lld",&n,&k,&a);

     if((n*k)%a!=0)printf("double\n");
     else 
     {
        if((n*k)/a<=2147483647)printf("int\n");
        else printf("long long\n");
     }
    return 0;
}