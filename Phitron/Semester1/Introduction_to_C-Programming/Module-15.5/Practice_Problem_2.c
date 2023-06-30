#include<stdio.h>
void my_len(char str[]) //void my_len(char *str)
{
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("%d\n",len);
}
int main()
{
     char st[100];
     scanf("%s",st);
     my_len(st);
    return 0;
}