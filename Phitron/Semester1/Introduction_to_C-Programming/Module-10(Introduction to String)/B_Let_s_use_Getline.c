#include<stdio.h>
int main()
{
     int i=0;
     char s[1000001];
     fgets(s,1000001,stdin);
    
     while(s[i]!='\\')
     {
        printf("%c",s[i]);
        i++;
     }

    return 0;
}
//Using For Loop
// #include<stdio.h>
// int main()
// {
//      char s[1000001];
//      fgets(s,1000001,stdin);
//      for(int i=0;s[i]!='\\';i++)
//      {
//         printf("%c",s[i]);
//      }

//     return 0;
// }
//Ager Code
// #include<stdio.h>
// int main()
// {
//     char s[1000001];
//     gets(s);

//     int i=0;
//     while(s[i]!='\0')
//     {
//         if(s[i]=='\\')
//         {
//             break;
//         }
//         printf("%c",s[i]);
//         i++;
//     }

//     return 0;
// }