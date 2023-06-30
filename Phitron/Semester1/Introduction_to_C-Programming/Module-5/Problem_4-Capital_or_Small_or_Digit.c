//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include<stdio.h>
int main()
{
     char ch;
     scanf("%c",&ch);

     if(ch>=48 && ch<=57)//ch>='0' && ch<='9'
     {
        printf("IS DIGIT\n");
     }
     else
     {
        printf("ALPHA\n");
        if(ch>='a' && ch<='z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
     }
    return 0;
}