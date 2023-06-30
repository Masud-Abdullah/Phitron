#include<stdio.h>
#include<string.h>
void fun(char str[])  //same kaj pointer use koreo kors jay void fun(char * str)
{
    printf("%d\n",strlen(str));
}
int main()
{
     char str[6]="Hello";
     fun(str);    /// string er khetre length pathanor dorkar hoy na 
    return 0;
}