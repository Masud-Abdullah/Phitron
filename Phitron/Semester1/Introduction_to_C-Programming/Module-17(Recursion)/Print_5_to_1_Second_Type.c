#include<stdio.h>
void fun(int i)
{
    if(i==6)return ;  //base case.
    fun(i+1);
    printf("%d\n",i);  //ekhane age function call korechi pore print korechi. tai main function theke parameter hishebe 1 pathaleo print hobr reverse way te. orthat 5 to 1
}
int main()
{
     fun(1);
    return 0;
}