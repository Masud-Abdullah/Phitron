#include<stdio.h>
int main()
{
     int ans;
     char ch;
     scanf("%c",&ch);

     if(ch>='a' && ch<='z')
     {
        ans=ch-32;
        printf("%c\n",ans);
     }
     else if(ch>='A' && ch<='Z')
     {
        ans=ch+32;
        printf("%c\n",ans);
     }

    return 0;
}