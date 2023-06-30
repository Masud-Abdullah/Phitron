//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include<stdio.h>
int main()
{
     long long int a,b,c,d;
     scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

//each operator is used only once.(Most important line of this problem)
     
     long long int p=a+b*c;
     long long int q=a*b+c;
     long long int r=a+b-c;
     long long int s=a-b+c;
     long long int t=a*b-c;
     long long int u=a-b*c;


     if(p==d || q==d || r==d || s==d || t==d || u==d )
     {
        printf("YES\n");
     }
     else printf("NO\n");
    return 0;
}

