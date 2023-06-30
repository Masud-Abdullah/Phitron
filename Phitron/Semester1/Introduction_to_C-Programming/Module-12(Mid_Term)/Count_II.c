#include<stdio.h>
#include<string.h>
int main()
{
    int vowel=0;
     char s[1001];
     scanf("%s",s);

     for(int i=0;i<strlen(s);i++)
     {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            vowel++;
        }
     }
     printf("%d\n",vowel);
    return 0;
}