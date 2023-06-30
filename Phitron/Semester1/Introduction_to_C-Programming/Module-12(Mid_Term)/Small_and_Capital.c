#include<stdio.h>
#include<string.h>
int main()
{
     int capital=0,small=0;
     char s[1001];
     scanf("%s",s);
     for(int i=0;i<strlen(s);i++)
     {
        if(s[i]>='A' && s[i]<='Z')capital++;
        else if(s[i]>='a' && s[i]<='z')small++;
     }

     printf("%d %d\n",capital,small);
    return 0;
}