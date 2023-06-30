//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include<stdio.h>
int main()
{
     int n;

     //while loop er condition er vitore variable scanf !=EOF likhle infinity shongkhok value scan kora jabe.
     while(scanf("%d",&n)!=EOF)
     {
        if(n==1999)
        {
            printf("Correct\n");
            break;
        }
        else printf("Wrong\n");
     }
    return 0;
}