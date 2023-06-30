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