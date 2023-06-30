// #include <stdio.h>
// int main()
// {
//     int x = 100;
//     int *ptr = &x;

//     printf("x er address--->%p\n",&x); 
//     printf("ptr er value--->%p\n",ptr); 
//     printf("ptr er address--->%p\n",&ptr); 
//     printf("ptr er memory--->%d\n",sizeof(ptr)); 
//     return 0;
// }

#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;

    //x=200;
    *ptr=200;
    printf("%d\n",x);
    printf("%d\n",*ptr);

    
    return 0;
}