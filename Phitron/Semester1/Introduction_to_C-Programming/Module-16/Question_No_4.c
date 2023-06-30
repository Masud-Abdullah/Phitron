//Question: Show the 4 types of examples of functions given below with an example. 
//You can give any example you want, but make sure you are giving different examples 
//for all the four types..

#include<stdio.h>
//1. Return_type + Parameter
int summation(int x,int y)
{
    int sum=x+y;
    return sum;
}
//2.Return_type + No Parameter
int substraction()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int sub=x-y;
    return sub;
}
//3.No Return_type + Parameter
void multiplication(int x,int y)
{
    int mul=x*y;
    printf("%d\n",mul);
}
//4.No Return_type + No Parameter
void division()
{
    double x,y;
    scanf("%lf%lf",&x,&y);
    double div=x/y;
    printf("%.2lf\n",div);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int add=summation(a,b);
    printf("%d\n",add);

    int sub=substraction();
    printf("%d\n",sub);

    multiplication(a,b);

    division();
    return 0;
}

// Has Return + Parameter
// Has Return + No Parameter
// No Return + Parameter
// No Return + No Parameter
