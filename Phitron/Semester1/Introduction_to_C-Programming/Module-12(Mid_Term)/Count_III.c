#include<stdio.h>
#include<string.h>
int main()
{
      char s[1001];
     scanf("%s",s);
     int alphabet[26]={0};
     for(int i=0;i<strlen(s);i++)
     {
        alphabet[s[i]-'a']++;
     }

     for(int i=0;i<26;i++)
     {
        printf("%c - %d\n",i+'a',alphabet[i]);//i+'a' na diye i+97 o deya jabe;
     }

    return 0;
}



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//      char s[1001];
//      scanf("%s",s);

//      for(char ch='a';ch<='z';ch++)
//      {
//         int cnt=0;
//         for(int i=0;i<strlen(s);i++)
//         {
//             if(s[i]==ch)cnt++;
//         }
//         printf("%c - %d\n",ch,cnt);
//      }
//     return 0;
// }