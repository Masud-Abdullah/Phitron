//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
#include<stdio.h>
#include<string.h>
int main()
{
     char s[1001],t[1001];
     scanf("%s%s",s,t);

     int len_s=strlen(s);
     int len_t=strlen(t);

     printf("%d %d\n",len_s,len_t);
     printf("%s %s\n",s,t);
    return 0;
}

//Ager Code
// #include<stdio.h>
// int main()
// {
//     char s[1000],t[1000];

//     scanf("%s",&s);
//     scanf("%s",&t);

//     int i=0,j=0,len_1=0,len_2=0;

//     while(s[i]!='\0')
//     {
//         i++;
//         len_1++;
//     }
//     while(t[j]!='\0')
//     {
//         j++;
//         len_2++;
//     }

//     printf("%d %d\n%s %s",len_1,len_2,s,t);

//     return 0;
// }