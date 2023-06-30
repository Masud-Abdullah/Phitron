#include<stdio.h>
void fun()
{
    printf("fun\n");
    fun(); //infinity time run hobe. stack overflow hole theme jabe.
}
int main()
{
     fun();
    return 0;
}