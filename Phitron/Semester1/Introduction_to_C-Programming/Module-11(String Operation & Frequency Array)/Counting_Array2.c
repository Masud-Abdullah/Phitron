//For Counting in a oder which is if a charracter appear in a string first then we will count his frequency first.
#include<stdio.h>
#include<string.h>
int main()
{
     char s[100];
     scanf("%s",s);
     int cnt[26]={0};

     for(int i=0;i<strlen(s);i++)
     {
        int val=s[i]-'a';
        cnt[val]++;
     }

     for(int i=0;i<strlen(s);i++)
     {
        int val=s[i]-'a';
        if(cnt[val]!=0)
        {
            printf("%c : %d\n",val+'a',cnt[val]);
        }
        cnt[val]=0;
     }
    return 0;
}


//For Counting frequency in Alphabatical Order
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//      char s[100];
//      scanf("%s",s);
//      int cnt[26]={0};

//      for(int i=0;i<strlen(s);i++)
//      {
//         int val=s[i]-'a';
//         cnt[val]++;
//      }

//      for(int i=0;i<26;i++)
//      {
//         if(cnt[i]!=0)
//         {
//             printf("%c : %d\n",i+'a',cnt[i]);
//         }
//      }
//     return 0;
// }