//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include<stdio.h>
int main()
{
     char s[100001];
     scanf("%s",s);

     for(int i=0;s[i]!='\0';i++)
     {
        if(s[i]==',')printf(" ");
        else if(s[i]>='a' && s[i]<='z')
        {
            printf("%c",s[i]-32);
        }
         else if(s[i]>='A' && s[i]<='Z')
        {
            printf("%c",s[i]+32);
        }
     }
    return 0;
}
//Amar ager code
// #include<stdio.h>
// int main()
// {

//     char s[100001];
//     scanf("%s",s);

//     int i=0;
//     for( int i=0;s[i]!='\0';i++)
//     {
//         if(s[i]==',')
//         {
//             s[i]=' ';
//         }
//         else if(s[i]>='a' && s[i]<='z')
//         {
//             s[i]=s[i]-32;
//         }
//         else if(s[i]>='A' && s[i]<='Z')
//         {
//             s[i]=s[i]+32;
//         }
//     }
//      printf("%s",s);

//     return 0;
// }