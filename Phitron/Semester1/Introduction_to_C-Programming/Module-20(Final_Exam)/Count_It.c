#include<stdio.h>
#include<string.h>
int main()
{
     char st[1005];
     fgets(st,1005,stdin);
     int Capital=0;
     int Small=0;
     int Space=0;

     for(int i=0;i<strlen(st);i++)
     {
        if(st[i]>='A' && st[i]<='Z')
        {
            Capital++;
        }
        else  if(st[i]>='a' && st[i]<='z')
        {
            Small++;
        }
        else if(st[i]==' '){
            Space++;
        }
     }

     printf("Capital - %d\nSmall - %d\nSpaces - %d\n",Capital,Small,Space);
    return 0;
}