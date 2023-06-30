//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include<stdio.h>
int main()
{
     int N;
     scanf("%d",&N);

     if(N==1)printf("-1\n");
     else
     {
        //if(N%2!=0)N--;

        for(int i=1;i<=N;i++)
        {
            if(i%2==0)printf("%d\n",i);
        }
     }
    return 0;
}