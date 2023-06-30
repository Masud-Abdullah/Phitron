//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include<stdio.h>
#include<string.h>
int main()
{
     char a[11],b[11];
     scanf("%s%s",a,b);
     int len_A=strlen(a);
     int len_B=strlen(b);

     printf("%d %d\n",len_A,len_B);
     printf("%s%s\n",a,b);
     char tm=a[0];
     a[0]=b[0];
     b[0]=tm;
     printf("%s %s\n",a,b);
    return 0;
}
//Ager code
// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     char a[1000],b[1000],c[1000],temp;
//     gets(a);
//     gets(b);

//     int len_a=strlen(a);
//     int len_b=strlen(b);
//     strlen(b);
//     printf("%d %d\n",len_a,len_b);

//     strcpy(c,a);
//     strcat(a,b);
//     printf("%s\n",a);

//     /*strcpy(temp,a[0]);
//     strcpy(a[0],b[0]);
//     strcpy(b[0],temp);*/

//     temp=c[0];
//     c[0]=b[0];
//     b[0]=temp;

//     printf("%s %s\n",c,b);

//     return 0;
// }
//  