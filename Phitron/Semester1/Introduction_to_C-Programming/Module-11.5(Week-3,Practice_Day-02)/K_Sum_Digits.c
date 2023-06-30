//Given a number N and an array A of N digits (not separated by space). 
//Print the summation of these digits.
#include<stdio.h>
int main()
{
     int n,sum=0;
     scanf("%d",&n);
     char a[n+1];
     scanf("%s",a);

     for(int i=0;i<n;i++)
     {
        sum+=a[i]-'0'; //or sum+=a[i]-48;
     }
     printf("%d\n",sum);
    return 0;
}
//Ager code
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     char a[n+1];
//     scanf("%s",&a);

//     int i,sum=0;

//     for(i=0; a[i]!='\0'; i++)
//     {
//         sum=sum+(a[i]-48);
//     }
//     printf("%d\n",sum);
//     return 0;
// }