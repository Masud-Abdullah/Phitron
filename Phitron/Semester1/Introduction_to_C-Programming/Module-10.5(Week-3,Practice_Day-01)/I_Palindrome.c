//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<stdio.h>
#include<string.h>
int main()
{
     int ans=1,i,j;
     char s[1001];
     scanf("%s",s);
     int len=strlen(s);
     for(i=0,j=len-1;i<j;i++,j--)
     {
        if(s[i]!=s[j])
        {
            ans=0;
            break;
        }
     }

     if(ans)printf("YES\n");
     else printf("NO\n");
    return 0;
}
//Ager code
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1001],t[1001];
//     scanf("%s",s);

//     int i,j,flag,len=strlen(s);

//     for(i=0,j=len-1; j>=0; i++,j--)
//     {
//         t[i]=s[j];
//     }
//     t[i]='\0';

//     flag=strcmp(s,t);

//     if(flag==0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }