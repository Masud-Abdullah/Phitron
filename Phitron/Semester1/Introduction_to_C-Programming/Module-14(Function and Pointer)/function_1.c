//Return type+Parameter
#include<stdio.h>
// return_type name(parameter)
// {
//     code
//     return what?
// }

int sum(int a,int b)//x==10,y=20;
{
    int sum=a+b;
    return sum; //etar date type ei hobe function er data type
}
// int sum(int x,int y); declaration of a function, it needs when we make a function below the main function
int main()
{
     int res=sum(10,20);
     printf("%d\n",res);
//function jei value return korbe shei value alada variable a store kore then oi variable
//tao print kora jabe or directly o print kora jabe.
     printf("%d\n",sum(10,100));
     printf("%d\n",sum(30,300));
     int x,y;
     scanf("%d%d",&x,&y); //If i want then i can take input from user.
     printf("Sum = %d\n",sum(x,y));

    return 0;
}
// int sum(int a,int b)//x==10,y=20;
// {
//     int sum=a+b;
//     return sum; //etar date type ei hobe function er data type
// }