#include <stdio.h>
void sort()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    int A = a[0];
    int B = a[1];
    int C = a[2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int tm = a[i];
                a[i] = a[j];
                a[j] = tm;
            }
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n%d\n%d\n%d\n", A, B, C);
}
int main()
{
    sort();
    return 0;
}
//Ager Code
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);

//     if(a<=b && a<=c && b<=c) printf("%d\n%d\n%d\n",a,b,c);

//     else if(a<=b && a<=c && c<=b) printf("%d\n%d\n%d\n",a,c,b);
//     else if(a==b && a==c && b==c) printf("%d\n%d\n%d\n",a,b,c);

//     else if(b<=a && b<=c && a<=c) printf("%d\n%d\n%d\n",b,a,c);
//     else if(b<=a && b<=c && c<=a) printf("%d\n%d\n%d\n",b,c,a);

//     else if(c<=a && c<=b && a<=b) printf("%d\n%d\n%d\n",c,a,b);
//     else if(c<=a && c<=b && b<=a) printf("%d\n%d\n%d\n",c,b,a);

//     printf("\n%d\n%d\n%d\n",a,b,c);

//     return 0;
// }