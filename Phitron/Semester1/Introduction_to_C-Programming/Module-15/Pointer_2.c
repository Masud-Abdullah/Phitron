#include <stdio.h>
int main()
{
    double x = 5.26;
    double *ptr = &x;
    double*ptr2=ptr;
    *ptr=10.20;
    *ptr2=9.78;

    printf("x er value- %.2lf\n",x);
    printf("x er value- %.2lf\n",*ptr);
    printf("x er value- %.2lf\n",*ptr2);
    
    return 0;
}