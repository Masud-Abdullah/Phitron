#include<stdio.h>
#include<string.h>
int main()
{
     char a[100],b[100];
     scanf("%s %s",a,b); 
     strcat(a,b);  //a er sathe b add hobe.
     printf("%s",a);
    return 0;
}

//---------------------------String Concatenation in manual way-----------------------
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//      char a[100],b[100];
//      scanf("%s %s",a,b);
//      int k=strlen(a);
//      for(int i=0;i<=strlen(b);i++)//loop i<=strlen(b) porjonto chalale null charracter alada kore deya lagbe na.But i< strlen(b) porjonto loop chalale alada kore null charracter dite hobe.
//      {
//         a[k]=b[i];
//         k++;
//      }
//      printf("%s",a);
//     return 0;
// }