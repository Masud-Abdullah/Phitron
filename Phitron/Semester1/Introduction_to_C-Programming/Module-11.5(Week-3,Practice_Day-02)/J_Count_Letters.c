#include<stdio.h>
int main()
{
     int cnt[26]={0};
     char c;
     //EOF use korar karon holo ekhane string er length 10^7 pojonto hote pare
     // but amra 10^6 er beshi length er string input nite parbo na.
     //tai EOF(End of File) use kore charracter diye input niyechi.
     while (scanf("%c",&c) != EOF)
     {
        cnt[c-'a']++;
     }
     for(int i=0;i<26;i++)
     {
        if(cnt[i]>0)
        {
            printf("%c : %d\n",i+97,cnt[i]);
        }
     }
     
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     char c;
//     int cnt[26]={0};
//     while(scanf("%c",&c) != EOF)
//     {
//         cnt[c-'a']++;
//     }
//     for(char i='a';i<='z';i++)
//     {
//         if(cnt[i-'a']>0)
//         {
//             printf("%c : %d\n",i,cnt[i-'a']);
//         }
//     }
//     return 0;
// }


//Ager Code
// #include<stdio.h>
// int main()
// {
//      char s[10000001];
//      scanf("%s",s);

//      for(char ch='a';ch<='z';ch++)
//      {
//         int cnt=0;
//         for(int i=0;s[i]!='\0';i++)
//         {
//             if(s[i]==ch)cnt++;
//         }
//        if(cnt>0) printf("%c : %d\n",ch,cnt);
//      }
//     return 0;
// }
