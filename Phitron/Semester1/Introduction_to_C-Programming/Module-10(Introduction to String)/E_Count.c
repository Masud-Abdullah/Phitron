#include<stdio.h>
#include<string.h>
int main()
{
    int sum=0;
     char s[1000001];
     scanf("%s",s);
    // gets(s);
     //fgets(s,1000001,stdin); //ei problem a fgets diye string input nile wrong answer ashtese.

     for(int i=0;i<strlen(s);i++)
     {
        sum+= s[i]-'0';
     }
     printf("%d\n",sum);
    return 0;
}